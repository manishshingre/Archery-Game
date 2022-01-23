using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class boxBrake : MonoBehaviour
{
    [SerializeField]
    private AudioSource boxBraking;
    // Start is called before the first frame update
    void Start()
    {
        boxBraking.Play();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
