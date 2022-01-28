using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    
    public Text starsText;
    public Text starsText1;
    // Update is called once per frame
    void Update()
    {
        updateStarsUI();
    }

    private void updateStarsUI(){
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 14; i < 27; i++){
            sum2 += PlayerPrefs.GetInt("Level " + i.ToString());
        }

        starsText.text = sum2 + "/" + 39;
        for(int j = 1; j < 14; j++){
            sum1 += PlayerPrefs.GetInt("Level " + j.ToString());
        }

        starsText1.text = sum1 + "/" + 39;
    }
}
