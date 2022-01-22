using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{

    [SerializeField]
    GameObject[] enemy;
    public static int enemy_count = 0;
    public static bool isGameOver;
    public GameObject gameOverScreen;
    public GameObject levelCompletescreen;
    public GameObject[] stars;
    private int EnemyCount;
    // Start is called before the first frame update
    private void Awake() {
        isGameOver = false;
        // if (instance==null)
        // instance=this;
    }
    // Start is called before the first frame update
    void Start()
    {   EnemyCount=GameObject.FindGameObjectsWithTag("Enemy").Length;
        enemy = GameObject.FindGameObjectsWithTag("Enemy");
        foreach(GameObject e in enemy){
            enemy_count += 1;
        }
    }
    public void starsAchieved(){
    int EnemyLeft=GameObject.FindGameObjectsWithTag("Enemy").Length;
    int EnemyKilled = EnemyCount-EnemyLeft;
    float percentage=(float.Parse((EnemyKilled).ToString())/float.Parse((EnemyCount).ToString())*100f);

    // print(percentage+"%");

    if(percentage>=33f && percentage <66f){
        //one star
        stars[0].SetActive(true);
    }
    else if(percentage>=66f && percentage< 70f){
        //two star
        stars[0].SetActive(true);
        stars[1].SetActive(true);
    }
    else{
        //three star
        stars[0].SetActive(true);
        stars[1].SetActive(true);
        stars[2].SetActive(true);
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
    }


    public void ReplayLevel(){
        SceneManager.LoadScene("Level1");
    }
}
