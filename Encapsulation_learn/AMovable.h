#pragma once
#include "Vector2.h"
class AMovable 
{
public:
	AMovable(Vector2* pDirection, const float& speed);
	~AMovable();

	virtual void SetDirection(Vector2* pDirection) { m_pDirectionVect = pDirection; }
	virtual void SetSpeed(const float& speed) { m_speed = speed; }
	virtual void Move() = 0;
protected:
	Vector2* m_pDirectionVect;
	float m_speed;

};