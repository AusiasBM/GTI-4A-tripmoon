using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class objetoInteractivo : MonoBehaviour
{
       public void OnPointerEnter1()
    {
    }

    public void OnPointerExit1()
    {
    }

    public void OnPointerClick1()
    {
        transform.position = new Vector3(transform.position.x + 2, transform.position.y, transform.position.z);
    }
}
