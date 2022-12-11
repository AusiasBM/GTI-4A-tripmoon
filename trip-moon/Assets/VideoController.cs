using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Video;

public class VideoController : MonoBehaviour
{
    public GameObject video;
    double duration = 0f;
    double time = 0f;
    // Start is called before the first frame update
    void Start()
    {
        duration = video.GetComponent<VideoPlayer>().length;
    }

    // Update is called once per frame
    void Update()
    {
        time += Time.deltaTime;

        if(time > duration) SceneManager.LoadScene("Interior_Bunker");
    }
}
