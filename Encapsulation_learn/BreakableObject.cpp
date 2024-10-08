#include "BreakableObject.h"
#include <iostream>
#include <sstream>
#include <string>
BreakableObject::BreakableObject(float x, float y, float maxHp)
{
	BreakableObject::Alive(maxHp);

	Vector2 pos(x, y);
	BreakableObject::Entity(pos);

	std::stringstream displayMessage;
	displayMessage << "Breakable Object just created at x = " << x << "and y = " << y;
	std::cout << displayMessage.str() << std::endl;
}

BreakableObject::~BreakableObject()
{}

void BreakableObject::TakeDamage(const float& damage)
{
	m_hp -= damage;

	if (m_hp <= 0)
		std::cout << "Breakable Object just broke";
}