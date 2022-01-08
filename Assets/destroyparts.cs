using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destroyparts : MonoBehaviour
{
    [SerializeField]
    Vector2 forceDirection;

    [SerializeField]
    float torque;

    Rigidbody2D rb2;
    // Start is called before the first frame update
    void Start()
    {
        rb2 = GetComponent<Rigidbody2D>();
        rb2.AddForce(forceDirection);
        rb2.AddTorque(torque);


        Destroy(gameObject, 4f);
    }

}
