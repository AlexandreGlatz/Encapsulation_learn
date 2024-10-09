#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
class Mob:public Entity, public Alive, public AMovable {
public:
	Mob(float x, float y, float maxHp, Vector2* pDirection);
	~Mob();

	void TakeDamage(const float& damage) override;
	void Move() override;
};