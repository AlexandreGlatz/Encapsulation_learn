#include "pch.h"
#include <iostream>
#include <sstream>
#include <iostream>
Mob::Mob(float x, float y, float maxHp, Vector2* pDirection) : Entity(new Vector2(x,y)), Alive(maxHp), AMovable(pDirection, 1.0f)
{
	std::stringstream displayMessage;
	displayMessage << "Mob just created at x = " << x << " and y = " << y << " with " << maxHp << " life, with direction x = " << pDirection->GetX() << " and direction y = " << pDirection->GetY();
	std::cout << displayMessage.str() << std::endl;
}

Mob::~Mob()
{}

void Mob::TakeDamage(const float& damage)
{
	Alive::TakeDamage(damage);
	if (m_hp <= 0)
		std::cout << "Mob just died\n";
}

void Mob::Move()
{
	*m_pPos += *m_pDirectionVect * m_speed;
	std::stringstream moveMessage;
	moveMessage << "Mob move to x = " << m_pPos->GetX() << " and y = " << m_pPos->GetY();
	std::cout << moveMessage.str() << std::endl;
}