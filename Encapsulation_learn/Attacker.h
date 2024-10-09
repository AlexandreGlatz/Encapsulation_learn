#pragma once
#include "Alive.h"
class Attacker
{
public:
	Attacker(const float& strength);
	~Attacker();

	virtual void Attack(Alive* target);

protected:
	float m_strength;
};