using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour {

	int i;

	public static GameObject clearSky;
	public GameObject cubePrefab;

	Vector3 cubePosition;

	// Use this for initialization
	//1 row of 16 cubes
	void Start () {
		for (i = 0; i < 16; i++) {

			cubePosition = new Vector3 (i*2, 0, 0);
			clearSky = Instantiate (cubePrefab, cubePosition, Quaternion.identity);

			clearSky.GetComponent<Renderer> ().material.color = Color.white;

		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
