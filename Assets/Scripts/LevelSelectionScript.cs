using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LevelSelectionScript : MonoBehaviour
{

    [SerializeField] private bool unlocked=false;//default value is false
    public Image unlockImage;
    public GameObject[] stars;
    public Sprite starSprite;

    // Update is called once per frame
    void Update()
    {
        UpdateLevelImage();
        UpdateLevelStatus();
        if(gameObject.name=="1"){
            unlocked = true;
        }
        if(gameObject.name=="14"){
            unlocked = true;
        }
    }

    private void UpdateLevelStatus(){
        int previousLevelNum = int.Parse(gameObject.name) - 1;
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

            for(int i = 0; i < PlayerPrefs.GetInt("Level " + gameObject.name); i++ ){
                stars[i].gameObject.GetComponent<Image>().sprite = starSprite;

            }
        }
    }

    public void PressSelection(string LevelName){
        if(unlocked){
            SceneManager.LoadScene(LevelName);
        }
    }

    public void clear(){
        PlayerPrefs.DeleteAll();
    }
}
