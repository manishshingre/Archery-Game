using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class friendScript : MonoBehaviour
{
    
    private void OnCollisionEnter2D(Collision2D collision) {
        if (collision.transform.tag == "Weapon"){
            PlayerManager.isGameOver = true;
        }
        
    }
}
