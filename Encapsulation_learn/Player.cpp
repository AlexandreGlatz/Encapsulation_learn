#include "pch.h"
#include <iostream>
#include <sstream>

Player::Player(Vector2* pPos, const float& maxHp, Vector2* pDirection ,const float& strength) : Entity(pPos), Alive(maxHp), AMovable(pDirection, 2.0f), Attacker(strength)
{
	std::stringstream displayMessage;
	displayMessage << "Player just created at x = " << pPos->GetX() << " and y = " << pPos->GetY() << " with " << maxHp << " life, with direction x = " << pDirection->GetX() << " and direction y = " << pDirection->GetY();
	std::cout << displayMessage.str() << std::endl;
}

Player::~Player()
{
}

void Player::TakeDamage(const float& damage)
{
	Alive::TakeDamage(damage);
	if (m_hp <= 0)
		std::cout << "Player just died\n";
}

void Player::Move()
{
	*m_pPos += *m_pDirectionVect * m_speed;
	std::stringstream moveMessage;
	moveMessage << "Player move to x = " << m_pPos->GetX() << " and y = " << m_pPos->GetY();
	std::cout << moveMessage.str() << std::endl;
}

void Player::Attack(Alive* target)
{
	std::cout << "Player just attacked" << std::endl;
	Attacker::Attack(target);
}
