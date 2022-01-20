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
    private void Awake() {
        isGameOver = false;
    }
    // Start is called before the first frame update
    void Start()
    {
        enemy = GameObject.FindGameObjectsWithTag("Enemy");
        foreach(GameObject e in enemy){
            enemy_count += 1;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (isGameOver){
            gameOverScreen.SetActive(true);
        }
        if (enemy_count == 0){
            levelCompletescreen.SetActive(true);
        }
    }


    public void ReplayLevel(){
        SceneManager.LoadScene("Level1");
    }
}
