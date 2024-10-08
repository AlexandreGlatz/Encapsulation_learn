#pragma once
#include "Alive.h"
class Attacker
{
public:
	Attacker(float& m_strength);
	~Attacker();

	virtual void Attack(Alive* target);

private:
	float m_strength;
};