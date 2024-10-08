#pragma once
#include "Vector2.h"
class Entity {
public:
	Entity();
	Entity(Vector2* pos);
	~Entity();

	virtual void SetPos(Vector2* pPos) { m_pPos = pPos; }
	virtual Vector2* GetPos() { return m_pPos; }

protected:
	Vector2* m_pPos;
};