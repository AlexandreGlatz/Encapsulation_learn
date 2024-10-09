#include "pch.h"

AMovable::AMovable(Vector2* pDirection, const float& speed) :
	m_pDirectionVect(nullptr),
	m_speed(0.f)
{
	m_pDirectionVect = pDirection;
	m_speed = speed;
}

AMovable::~AMovable()
{
}
