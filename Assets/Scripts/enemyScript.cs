using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enemyScript : MonoBehaviour
{
    [SerializeField]
    UnityEngine.Object destructableRef;

    
    private void OnCollisionEnter2D(Collision2D other){
        if(other.gameObject.CompareTag("Weapon")){
            ExplodeBox();
            PlayerManager.enemy_count -= 1;
        }
    }

    private void ExplodeBox()
    {
        
        GameObject destructable = (GameObject)Instantiate(destructableRef);
        destructable.transform.position = transform.position;
        
        Destroy(gameObject,0.1f);
    }

}
