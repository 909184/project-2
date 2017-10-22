using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClickBehavior : MonoBehaviour {
	bool click;

	//clicked cube turns red
	//if another cube is clicked, that cube turns red. prev clicked cube turns white

	void OnMouseDown() {
		if (!click) {
			GameController.clearSky.GetComponent<Renderer> ().material.color = Color.red;
			click = true;
		} 
		else {
			GameController.clearSky.GetComponent<Renderer> ().material.color = Color.white;
			click = false;
		}

	}

}
