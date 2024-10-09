#pragma once
#include <iostream>
#include <vector>

#include "Entity.h"
class World {
public:
	World();
	~World();
	void Init();
	void Step();

private:
	std::vector<Entity*> m_entities;
};