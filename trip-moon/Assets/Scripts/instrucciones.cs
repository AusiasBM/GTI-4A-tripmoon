using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class instrucciones : MonoBehaviour
{

    public Button btnInstruccioness;
    public Button btnVideo;
    public Button btnCerrarInstruccioness;
    public Button btnCerrarVideo;
    public GameObject planoInstrucciones;
    public GameObject planoTrailer;
    public GameObject menu;
    
    public void abrirInstrucciones()
    {
        planoInstrucciones.SetActive(true);
        menu.SetActive(false);
    }

    public void VolverInstrucciones()
    {
        planoInstrucciones.SetActive(false);
        menu.SetActive(true);
    }

    public void abrirTrailer()
    {
        planoTrailer.SetActive(true);
        menu.SetActive(false);
    }

    public void VolverTrailer()
    {
        planoTrailer.SetActive(false);
        menu.SetActive(true);
    }

    // Start is called before the first frame update
    void Start()
    {
        Button btn = btnInstruccioness.GetComponent<Button>();
        btn.onClick.AddListener(abrirInstrucciones);
        Button btnCerrar = btnCerrarInstruccioness.GetComponent<Button>();
        btnCerrar.onClick.AddListener(VolverInstrucciones);

        Button btnTrailer = btnVideo.GetComponent<Button>();
        btnTrailer.onClick.AddListener(abrirTrailer);
        Button btnCerrarTrailer = btnCerrarVideo.GetComponent<Button>();
        btnCerrarTrailer.onClick.AddListener(VolverTrailer);
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
