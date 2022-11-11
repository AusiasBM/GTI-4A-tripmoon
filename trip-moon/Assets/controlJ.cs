using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;

public class controlJ : MonoBehaviour
{
    public float speedForward = 8.0f;
    public float speedTurn = 30.0f;
    public float deadZone = 0.5f;
    public Button btnReset;


    void start()
    {
        Button btn = btnReset.GetComponent<Button>();
        btn.onClick.AddListener(resetCar);

    }

    void resetCar(){
        transform.position = new Vector3(0, 0, 0);
        transform.rotation = Quaternion.Euler(0, 0, 0);
    }

    void Update()
    {
        var gamepad = Gamepad.current;
        if (gamepad == null)
            return;

        Vector2 mi_pad_left = gamepad.leftStick.ReadValue();
        Vector2 mi_pad_right = gamepad.rightStick.ReadValue();

        float moveX = 0;
        if (mi_pad_right.x > deadZone)
        {
            moveX = mi_pad_right.x;
        }
        else if (mi_pad_right.x < -deadZone)
        {
            moveX = mi_pad_right.x;
        }
        transform.Translate(mi_pad_left.y * Vector3.forward * Time.deltaTime* speedForward);
        transform.Rotate(Vector3.up, moveX* Time.deltaTime*speedTurn);
    }
}