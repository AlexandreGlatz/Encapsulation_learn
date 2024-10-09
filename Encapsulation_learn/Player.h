#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "Attacker.h"
class Player:public Entity, public Alive, public AMovable, public Attacker{
public:
	Player(Vector2* pPos, const float& maxHp, Vector2* pDirection, const float& strength);
	~Player();

	void TakeDamage(const float& damage) override;
	void Move() override;
	void Attack(Alive* target) override;
};