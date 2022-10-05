using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class levelsound : MonoBehaviour
{
    private static readonly string BackgrounPref = "BackgrounPref";
    private static readonly string SoundEffectsPref = "SoundEffectsPref";
    private float backgroundFloat, soundEffectsFloat;
    public AudioSource backgroundAudio;
    public AudioSource[] soundEffectsAudio;
    
    void Awake()
    {
        ContinueSettings();
    }

private void ContinueSettings()
{

	backgroundFloat = PlayerPrefs.GetFloat(BackgrounPref);
	soundEffectsFloat = PlayerPrefs.GetFloat(SoundEffectsPref);

	backgroundAudio.volume = backgroundFloat;

        for(int i = 0; i < soundEffectsAudio.Length; i++)
        {
            soundEffectsAudio[i].volume = soundEffectsFloat ;
        }
}

    
}
