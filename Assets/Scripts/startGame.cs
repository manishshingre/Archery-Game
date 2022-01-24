using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class startGame : MonoBehaviour
{
    public void startTheGame(){
        SceneManager.LoadScene("LevelSelectionScreen");
    }
}
