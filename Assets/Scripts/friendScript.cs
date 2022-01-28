using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class friendScript : MonoBehaviour
{
    [SerializeField]
    UnityEngine.Object destructableRef;
    private void OnCollisionEnter2D(Collision2D collision) {
        if (collision.transform.tag == "Weapon"){
            PlayerManager.isGameOver = true;
        }
        
    }
}
