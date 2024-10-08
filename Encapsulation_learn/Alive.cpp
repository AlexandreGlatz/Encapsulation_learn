#include "Alive.h"

Alive::Alive():
	m_hp(0),
	m_maxHp(0)
{
}
Alive::Alive(float maxHp) :
	m_hp(0),
	m_maxHp(0)
{
	m_maxHp = maxHp;
	m_hp = maxHp;
}

Alive::~Alive()
{
}