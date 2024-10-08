#pragma once
#include "Entity.h"
#include "Alive.h"
class BreakableObject:public Entity, public Alive {

public:
	BreakableObject(float x, float y, float maxHp);
	~BreakableObject();

	void TakeDamage(const float& damage) override;

};