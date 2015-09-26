﻿using UnityEngine;
using System.Collections;

public class dummyEnemyScript : MonoBehaviour {

	// Use this for initialization
	public int health = 10;
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnCollisionEnter2D(Collision2D coll) {
		if (coll.gameObject.tag == "hitBox") {
			var boxScript = coll.gameObject.GetComponent<hitBoxScript>();
			if (boxScript) {
				this.health -= boxScript.damage;
				if (this.health <= 0) {
					Die();
				}
			}
			this.GetComponent<Rigidbody2D>().MovePosition(new Vector2(this.transform.position.x, this.transform.position.y) + new Vector2(this.transform.position.x - FindObjectOfType<PlayerScript>().transform.position.x, this.transform.position.y - FindObjectOfType<PlayerScript>().transform.position.y).normalized * 0.1f);
		}
	}

	void Die() {
		Destroy(gameObject);
	}
}
