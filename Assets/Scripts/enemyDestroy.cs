using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enemyDestroy : MonoBehaviour
{

    // public GameObject blood;
    UnityEngine.Object blood;
    private void OnCollisionEnter2D(Collision2D other){
        if(other.gameObject.tag.Equals("Weapon")){
            // Instantiate(blood, transform.position, Quaternion.identity);
            // Destroy(other.gameObject);
            // Destroy(gameObject);
            BloodSplash();
        }
    }

    private void BloodSplash()
    {
        GameObject splash = (GameObject)Instantiate(blood);
        splash.transform.position = transform.position;
        Destroy(gameObject);
    }

}
