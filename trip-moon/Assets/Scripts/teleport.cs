using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class teleport : MonoBehaviour
{

    public Transform playerObject;

    public void OnPointerEnter()
    {
    }

    public void OnPointerExit()
    {

    }

    public void OnPointerClick(Vector3 position)
    {
        playerObject.position = position;
    }
}
