using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class imageclearer : MonoBehaviour
{
    void Awake()
{
    SpriteRenderer sr = GetComponent<SpriteRenderer>();
    if (sr == null) return;

    transform.localScale = new Vector3(1, 1, 1);

    float width = sr.sprite.bounds.size.x;
    float height = sr.sprite.bounds.size.y;

    transform.localScale = new Vector2(Screen.width / width, Screen.height / height);
}
}
