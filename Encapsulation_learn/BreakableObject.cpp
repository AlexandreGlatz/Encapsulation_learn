#include "pch.h"
#include <iostream>
#include <sstream>
#include <string>
BreakableObject::BreakableObject(float x, float y, float maxHp) : Entity(new Vector2(x, y)), Alive(maxHp)
{
	std::stringstream displayMessage;
	displayMessage << "Breakable Object just created at x = " << x << " and y = " << y <<" and " << maxHp << " life";
	std::cout << displayMessage.str() << std::endl;
}

BreakableObject::~BreakableObject()
{}

void BreakableObject::TakeDamage(const float& damage)
{
	Alive::TakeDamage(damage);
	if (m_hp <= 0)
		std::cout << "Breakable Object just broke\n";
}