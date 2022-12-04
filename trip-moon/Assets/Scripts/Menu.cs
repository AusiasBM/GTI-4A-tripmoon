using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menu : MonoBehaviour
{

    public GameObject menu;
    public GameObject instrucciones;
    

    public void abrirInstrucciones()
    {
        instrucciones.SetActive(true);
        menu.SetActive(false);
    }

    public void VolverInstrucciones()
    {
        instrucciones.SetActive(false);
        menu.SetActive(true);
    }

    public void abrirScenaTrailer()
    {
        SceneManager.LoadScene("Trailer");
    }

    public void volverDelTrailer()
    {
        SceneManager.LoadScene("Interior_Bunker");
    }


    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
    }
}
