using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enemyScript : MonoBehaviour
{
    private void OnCollisionEnter2D(Collision2D other){
        if(other.gameObject.CompareTag("Weapon")){
            ExplodeBox();
            PlayerManager.enemy_count -= 1;
        }
    }

    private void ExplodeBox()
    {
        Destroy(gameObject,0.1f);
    }

}
