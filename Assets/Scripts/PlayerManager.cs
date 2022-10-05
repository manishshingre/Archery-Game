using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerManager : MonoBehaviour
{
    [SerializeField]
    GameObject[] enemy;
    
    public static int enemy_count = 0;
    public static bool isGameOver;
    
    private int EnemyCount;
    private int BoxCount;

    private void Awake() {
        isGameOver = false;
    }
    // Start is called before the first frame update
    void Start()
    {   
        
        EnemyCount = GameObject.FindGameObjectsWithTag("Enemy").Length;
        BoxCount = GameObject.FindGameObjectsWithTag("Box").Length;
        enemy = GameObject.FindGameObjectsWithTag("Enemy");
        foreach(GameObject e in enemy){
            enemy_count += 1;
        }
    }
    void Update()
    {
        int EnemyLeft=GameObject.FindGameObjectsWithTag("Enemy").Length;
       
    }
    public void PressSelection(string LevelName){
        Time.timeScale=1;
       
    }

    public void PauseGame(){
        Time.timeScale=0;
    }

    public void ResumeGame(){
        Time.timeScale=1;

    }

}
