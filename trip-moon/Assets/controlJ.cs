using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class controlJ : MonoBehaviour
{
    public float speedForward = 8.0f;
    public float speedTurn = 30.0f;
    public float deadZone = 0.5f;

    void Update()
    {
        var gamepad = Gamepad.current;
        if (gamepad == null)
            return;

        Vector2 mi_pad = gamepad.leftStick.ReadValue();

        float moveX = 0;
        if (mi_pad.x > deadZone)
        {
            moveX = mi_pad.x;
        }
        else if (mi_pad.x < -deadZone)
        {
            moveX = mi_pad.x;
        }
        transform.Translate(mi_pad.y * Vector3.forward * Time.deltaTime* speedForward);
        transform.Rotate(Vector3.up, moveX* Time.deltaTime*speedTurn);
    }
}