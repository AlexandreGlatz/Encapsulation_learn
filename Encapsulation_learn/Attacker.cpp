#include "Attacker.h"

Attacker::Attacker(float& strength) :
	m_strength(0)
{
	m_strength = strength;
}

Attacker::~Attacker()
{}

void Attacker::Attack(Alive* target)
{
	target->TakeDamage(m_strength);
}