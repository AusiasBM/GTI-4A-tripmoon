using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 using TMPro;

public class codeJoysticks : MonoBehaviour
{
    private TextMeshProUGUI texto;
    void Start()
    {
        texto = this.GetComponent<TextMeshProUGUI>();
        texto.text = "Joysticks: " + Input.GetJoystickNames().Length;
    }
    void Update()
    {

        if(Input.GetButton("A"))
        {
            print("A");
        }   

        if(Input.GetButton("Fire1"))
        {
            print("Fire 1");
        }   

        System.Array values = System.Enum.GetValues(typeof(KeyCode));
        foreach (KeyCode code in values)
        {
            if (Input.GetKeyDown(code)) { texto.text = (System.Enum.GetName(typeof(KeyCode), code)); }
        }
    }
}
