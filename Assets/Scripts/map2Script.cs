using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class map2Script : MonoBehaviour
{
    [SerializeField] private bool unlocked=false;//default value is false
    public Image unlockImage;
    public GameObject[] stars;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        UpdateLevelImage();
        UpdateLevelStatus();
    }

    private void UpdateLevelStatus(){
        int previousLevelNum = 13;
        if(PlayerPrefs.GetInt("Level "+ previousLevelNum) > 0){
            unlocked= true;
        }
    }

    private void UpdateLevelImage(){
        if(unlocked==false){
            unlockImage.gameObject.SetActive(true);
            for(int i = 0; i < stars.Length; i++)
            {
                stars[i].gameObject.SetActive(false);
            }
        }
        else{
            unlockImage.gameObject.SetActive(false);
            for(int i = 0; i < stars.Length; i++)
            {
                stars[i].gameObject.SetActive(true);
            }

        }

    }


    public void PressSelection(string LevelName){
        if(unlocked){
            SceneManager.LoadScene(LevelName);
        }
    }
}
