using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playVideo : MonoBehaviour
{
   UnityEngine.Video.VideoPlayer v;
    // Start is called before the first frame update
    void Start()
    {
        v = this.GetComponent<UnityEngine.Video.VideoPlayer>();
    }
    private void OnMouseDown()
    {
        StartCoroutine(playPauseVideo());
    }
    IEnumerator playPauseVideo()
    {
        v.Prepare();
        while (!v.isPrepared)
        {
            yield return null;
        }
        if (v.isPlaying)
        {
            v.Pause();
        }
        else
        {
            v.Play();
        }
        yield return null;
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
