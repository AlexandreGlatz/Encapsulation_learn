#include "Mob.h"
#include <iostream>
#include <sstream>
#include <iostream>
Mob::Mob(float x, float y, float maxHp, Vector2* direction)
{
	Vector2 pos(x, y);

	SetPos(&pos);
	Mob::Alive(maxHp);
	Mob::AMovable(direction, 1.0f);

	std::stringstream displayMessage;
	displayMessage << "Mob just created at x = " << x << "and y = " << y << "with " << maxHp << "hp" << "with direction x = " << direction->GetX() << "and direction y = " << direction->GetY();
	std::cout << displayMessage.str() << std::endl;
}

Mob::~Mob()
{}

void Mob::TakeDamage(const float& damage)
{
	m_hp -= damage;
	if (m_hp <= 0)
		std::cout << "Mob just died";
}

void Mob::Move(Vector2* pInitPos)
{
	*pInitPos += *m_pDirectionVect * m_speed;
	std::stringstream moveMessage;
	moveMessage << "Mob move to x =" << pInitPos->GetX() << "and y =" << pInitPos->GetY();
	std::cout << moveMessage.str() << std::endl;
}