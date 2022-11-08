using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Distancia_camara : MonoBehaviour
{
    public GameObject arcamara;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(Vector3.Distance(arcamara.transform.position, this.transform.position));
    }
}
