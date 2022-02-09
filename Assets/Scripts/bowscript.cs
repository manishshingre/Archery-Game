using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bowscript : MonoBehaviour
{

    public Vector2 direction;
    public LineRenderer lr;
    Vector2 dragStartPos;
    // public int maxDrag=5;
    // public float power = 8;
    Touch touch;
    public float LaunchForce;

    public GameObject Arrow;

//
    // public float force;
    public GameObject PointPrefab;

    public GameObject[] Points;

    public int numberOfpoints;//


    // Start is called before the first frame update
    void Start()
    {//
        Points = new GameObject[numberOfpoints];
        for (int i = 0; i < numberOfpoints; i++)
        {
            Points[i]= Instantiate(PointPrefab,transform.position,Quaternion.identity);
        }
        //
    }

    // Update is called once per frame
    void Update()
    {
        Vector2 MousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);

        Vector2 bowPos = transform.position;

        direction = bowPos - MousePos;

        FaceMouse();
        if(Input.touchCount > 0){
            touch = Input.GetTouch(0);

            if(touch.phase == TouchPhase.Began){
                DragStart();
            }

            if (touch.phase == TouchPhase.Moved){
                Dragging();
            }

            if(touch.phase == TouchPhase.Ended){
                DragRelease();
                Shoot();
            }
        }

// 
        for (int i = 0; i < Points.Length; i++)
        {
            Points[i].transform.position = PointPosition(i*0.1f);
        }

    }

    void FaceMouse()
    {
        transform.right = direction;
    }

    void DragStart(){
        dragStartPos = Camera.main.ScreenToWorldPoint(touch.position);
        // dragStartPos.z = 0f;
        lr.positionCount = 1;
        lr.SetPosition(0, dragStartPos);

    }

    void Dragging(){
        Vector2 draggingPos = Camera.main.ScreenToWorldPoint(touch.position);
        // draggingPos.z = 0f;
        lr.positionCount = 2;

        lr.SetPosition(1, draggingPos);

    }

    void DragRelease(){
        lr.positionCount = 0;

        Vector2 dragReleasePos = Camera.main.ScreenToWorldPoint(touch.position);
        // draggingPos.z = 0f;

        // Vector2 force = dragStartPos - dragReleasePos;
        // Vector2 clampedForce = Vector2.ClampMagnitude(force, maxDrag) * power;

        // rb.AddForce(clampedForce, ForceMode2D.Impulse);
    }

    void Shoot()
{
    if(PlayerManager.isGameOver==false && PlayerManager.enemy_count>0){
        GameObject ArrowIns = Instantiate(Arrow, transform.position, transform.rotation);
        // ArrowIns.GetComponent<Rigidbody2D>().AddForce(transform.right * LaunchForce);
        ArrowIns.GetComponent<Rigidbody2D>().velocity = (transform.right * LaunchForce);
    }
}

    Vector2 PointPosition(float t){
        Vector2 currentPointPos = (Vector2)transform.position + (direction.normalized * 20 * t) + 0.5f*Physics2D.gravity* (t*t);
        return currentPointPos;
    }
}
