using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bowscript : MonoBehaviour
{

    public Vector2 direction;
    public LineRenderer lr;
    Vector2 dragStartPos;
    Touch touch;
    public float LaunchForce;

    public GameObject Arrow;



    // Start is called before the first frame update
    void Start()
    {
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

    }

    void FaceMouse()
    {
        transform.right = direction;
    }

    void DragStart(){
        dragStartPos = Camera.main.ScreenToWorldPoint(touch.position);
        lr.positionCount = 1;
        lr.SetPosition(0, dragStartPos);

    }

    void Dragging(){
        Vector2 draggingPos = Camera.main.ScreenToWorldPoint(touch.position);
        lr.positionCount = 2;

        lr.SetPosition(1, draggingPos);

    }

    void DragRelease(){
        lr.positionCount = 0;

        Vector2 dragReleasePos = Camera.main.ScreenToWorldPoint(touch.position);
    }

    void Shoot()
{
    if(PlayerManager.isGameOver==false && PlayerManager.enemy_count>0){
        GameObject ArrowIns = Instantiate(Arrow, transform.position, transform.rotation);
        ArrowIns.GetComponent<Rigidbody2D>().AddForce(transform.right * LaunchForce);
    }
}

}
