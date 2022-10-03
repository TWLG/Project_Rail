using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpectatorCamera : MonoBehaviour
{
    public float movementSpeed = 1;

    public float speedH = 2;
    public float speedV = 2;


    public float yaw = 0;
    public float pitch = 0;


    // Start is called before the first frame update
    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }

    // Update is called once per frame
    void Update()
    {
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");

        yaw += speedH * Input.GetAxis("Mouse X");
        pitch -= speedV * Input.GetAxis("Mouse Y");

        transform.eulerAngles = new Vector3(pitch,yaw,0);
        transform.position += transform.TransformDirection(Vector3.forward)*v + transform.TransformDirection(Vector3.right)*h;
    
        if(Input.GetKeyDown(KeyCode.Escape)){
            Cursor.lockState = CursorLockMode.None;
            Cursor.visible = true;
        }
    
     if(Input.GetMouseButtonDown(0)){
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
        }
    }
}
