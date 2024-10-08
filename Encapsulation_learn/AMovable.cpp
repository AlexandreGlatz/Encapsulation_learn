#include "AMovable.h"
AMovable::AMovable():
	m_pDirectionVect(new Vector2(0.0f,0.0f)),
	m_speed(0.0f)
{

}

AMovable::AMovable(Vector2* pDirection, float speed) :
	m_pDirectionVect(nullptr),
	m_speed(0.f)
{
	m_pDirectionVect = pDirection;
	m_speed = speed;
}

AMovable::~AMovable()
{
	delete m_pDirectionVect;
}

void AMovable::Move(Vector2* pInitPos)
{
	*pInitPos += *m_pDirectionVect * m_speed;
}