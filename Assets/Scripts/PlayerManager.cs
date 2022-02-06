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
    public GameObject pausemenu;
    public GameObject[] stars;
    private int EnemyCount;
    private int BoxCount;

    public int score;
    string sceneName;

    public GameObject Pausemenupanel;


    // Start is called before the first frame update
    private void Awake() {
        isGameOver = false;
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
        // float percentage=(float.Parse((EnemyKilled).ToString()+BoxDestroyed.ToString())/float.Parse((EnemyCount).ToString()+(BoxCount*3.2f).ToString())*100f);

            float percentage=(float.Parse(BoxDestroyed.ToString())/float.Parse((BoxCount).ToString())*100f);
        
        print(percentage+"%");

        if (EnemyLeft==0){
            if(percentage>0f && percentage<=50f){
                //two star
                stars[2].SetActive(true);
                stars[1].SetActive(true);
                score = 2;
            }
            else if (percentage>50f){
                //three star
                stars[0].SetActive(true);
                stars[1].SetActive(true);
                stars[2].SetActive(true);
                score = 3;
            }
            else if( EnemyLeft==0){
                stars[2].SetActive(true);
                score=1;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        int EnemyLeft=GameObject.FindGameObjectsWithTag("Enemy").Length;
        if (isGameOver){
            // starsAchieved();
            gameOverScreen.SetActive(true);
            pausemenu.SetActive(false);
        }
        else if (EnemyLeft == 0){
            starsAchieved();
            levelCompletescreen.SetActive(true);
            pausemenu.SetActive(false);
        }
        if (isGameOver && panel_sound_Count==0){
            GameOverSound.Play();
            panel_sound_Count += 1;
        }
        if (EnemyLeft == 0 && panel_sound_Count==0){
            LevelCompleteSound.Play();
            panel_sound_Count += 1;
        }
        if(score > PlayerPrefs.GetInt(sceneName, 0)){
            PlayerPrefs.SetInt(sceneName, score);
        }
        
    }
    public void PressSelection(string LevelName){
        Time.timeScale=1;
        SceneManager.LoadScene(LevelName);

    }

    public void PauseGame(){
        Time.timeScale=0;
        Pausemenupanel.SetActive(true);
    }

    public void ResumeGame(){
        Time.timeScale=1;
        Pausemenupanel.SetActive(false);

    }
    
}
