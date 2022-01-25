using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    Scene m_Scene;

    [SerializeField]
    GameObject[] enemy;
    
    [SerializeField]
    private AudioSource GameOverSound;
    
    [SerializeField]
    private AudioSource LevelCompleteSound;
    public int panel_sound_Count = 0;
    public static int enemy_count = 0;
    public static bool isGameOver;
    public GameObject gameOverScreen;
    public GameObject levelCompletescreen;
    public GameObject[] stars;
    private int EnemyCount;
    private int BoxCount;

    public int score;
    string sceneName;


    // Start is called before the first frame update
    private void Awake() {
        isGameOver = false;
        // if (instance==null)
        // instance=this;
    }
    // Start is called before the first frame update
    void Start()
    {   
        m_Scene = SceneManager.GetActiveScene();
        sceneName = m_Scene.name;

        EnemyCount = GameObject.FindGameObjectsWithTag("Enemy").Length;
        BoxCount = GameObject.FindGameObjectsWithTag("Box").Length;
        enemy = GameObject.FindGameObjectsWithTag("Enemy");
        foreach(GameObject e in enemy){
            enemy_count += 1;
        }
    }
    public void starsAchieved(){
        int EnemyLeft=GameObject.FindGameObjectsWithTag("Enemy").Length;
        int BoxLeft=GameObject.FindGameObjectsWithTag("Box").Length;
        int EnemyKilled = EnemyCount-EnemyLeft;
        int BoxDestroyed = BoxCount-BoxLeft;
        float percentage=(float.Parse((EnemyKilled).ToString()+BoxDestroyed.ToString())/float.Parse((EnemyCount).ToString()+(BoxCount*3.2f).ToString())*100f);

        print(percentage+"%");

        if(percentage>=33f && percentage <50f){
            //one star
            stars[2].SetActive(true);
            score = 1;
        }
        else if(percentage>=50f && percentage< 80f){
            //two star
            stars[2].SetActive(true);
            stars[1].SetActive(true);
            score = 2;
        }
        else if (percentage>= 80f){
            //three star
            stars[0].SetActive(true);
            stars[1].SetActive(true);
            stars[2].SetActive(true);
            score = 3;
        }
        else{
            
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (isGameOver){
            gameOverScreen.SetActive(true);
            starsAchieved();
        }
        if (enemy_count == 0){
            levelCompletescreen.SetActive(true);
            starsAchieved();
        }
        if (isGameOver && panel_sound_Count==0){
            GameOverSound.Play();
            panel_sound_Count += 1;
        }
        if (enemy_count == 0 && panel_sound_Count==0){
            LevelCompleteSound.Play();
            panel_sound_Count += 1;
        }
        if(score > PlayerPrefs.GetInt(sceneName, 0)){
            PlayerPrefs.SetInt(sceneName, score);
        }
        
    }
    public void PressSelection(string LevelName){
        SceneManager.LoadScene(LevelName);
    }

}
