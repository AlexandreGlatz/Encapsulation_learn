// Encapsulation_learn.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <typeinfo>
#include <string>

int main()
{
	StaticObject staticObj(0.0f, 0.0f);
	BreakableObject breakableObject(0.0f, 1.0f, 10.0f);

	Vector2 mobDirection(0.0f, 1.0f);
	Mob mob(0.0f, 0.0f, 15.0f, &mobDirection);

	Vector2 playerPos(1.0f, 1.0f);
	Vector2 playerDirection(0.0f, 1.0f);
	Player player(&playerPos, 10.0f, &playerDirection, 10.0f);
	player.Move();
	player.Attack(&mob);
}


