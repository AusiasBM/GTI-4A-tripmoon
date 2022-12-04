//-----------------------------------------------------------------------
// <copyright file="CameraPointer.cs" company="Google LLC">
// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// </copyright>
//-----------------------------------------------------------------------

using System.Collections;
using UnityEngine;

/// <summary>
/// Sends messages to gazed GameObject.
/// </summary>
public class CameraPointer : MonoBehaviour
{
    private const float _maxDistance = 10;
    private GameObject _gazedAtObject = null;
    public GameObject mira;

    /// <summary>
    /// Update is called once per frame.
    /// </summary>
    void Update()
    {
        int layerMask = 1 << 6;
        //layerMask = ~layerMask;
        // Casts ray towards camera's forward direction, to detect if a GameObject is being gazed
        // at.

        mira.transform.position = transform.position + transform.forward * _maxDistance;

        RaycastHit hit;
        if (Physics.Raycast(transform.position, transform.forward, out hit, _maxDistance, layerMask))
        {
            _gazedAtObject = hit.transform.gameObject;
            Debug.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * hit.distance, Color.yellow);
            // GameObject detected in front of the camera.
            if (_gazedAtObject != hit.transform.gameObject)
            {
                // New GameObject.
                _gazedAtObject?.SendMessage("OnPointerExit");
                _gazedAtObject = hit.transform.gameObject;
                _gazedAtObject.SendMessage("OnPointerEnter");
                mira.transform.GetChild(0).GetComponent<Animator>().SetTrigger("grande");
            }
        }
        else
        {
            Debug.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * 1000, Color.white);
            //Debug.Log("Did not Hit");
            // No GameObject detected in front of the camera.
            if(_gazedAtObject != null)
            {
                mira.transform.GetChild(0).GetComponent<Animator>().SetTrigger("peque");
            }
            _gazedAtObject?.SendMessage("OnPointerExit");
            _gazedAtObject = null;
        }


        // Checks for screen touches.
        if (Input.GetButton("A"))
        {
            Vector3 position = new Vector3(hit.point.x , 1.6f, hit.point.z);
            _gazedAtObject?.SendMessage("OnPointerClick");
        }
        if (Input.GetKeyDown("space"))
        {
            Vector3 position = new Vector3(hit.point.x , 1.6f, hit.point.z);
            _gazedAtObject?.SendMessage("OnPointerClick", position);
        }
       
    }
}
