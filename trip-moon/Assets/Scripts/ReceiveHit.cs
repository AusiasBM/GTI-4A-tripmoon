using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ReceiveHit : MonoBehaviour
{
    public UnityEvent myEvent;
    
    public void OnPointerEnter1()
    {
    }

    public void OnPointerExit1()
    {
    }

    public void OnPointerClick1()
    {
        myEvent.Invoke();
    }
}
