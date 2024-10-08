#pragma once
#include "Vector2.h"
class AMovable 
{
public:
	AMovable();
	AMovable(Vector2* pDirection, float speed);
	~AMovable();

	virtual void SetDirection(Vector2* pDirection) { m_pDirectionVect = pDirection; }
	virtual void SetSpeed(float& speed) { m_speed = speed; }
	virtual void Move(Vector2* pInitPos);
protected:
	Vector2* m_pDirectionVect;
	float m_speed;

};