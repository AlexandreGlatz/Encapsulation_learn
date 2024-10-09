#include "pch.h"

World::World()
{
	m_entities.clear();
}

World::~World()
{
	m_entities.~vector();
}

void World::Init()
{
	StaticObject staticObject(0.0f, 1.0f);
	m_entities.push_back(&staticObject);

	BreakableObject breakableObject(0.0f, 2.0f, 1.0f);
	m_entities.push_back(&breakableObject);

	Vector2 mobDirection(1.0f, 1.0f);
	Mob mob(0.0f, 1.0f, 20.0f, &mobDirection);
	m_entities.push_back(&mob);

	Vector2 playerPos(-1.0f, 1.0f);
	Vector2 playerDirection(1.0f, 1.0f);
	Player player(&playerPos, 10.0f, &playerDirection, 10.0f);
	m_entities.push_back(&player);
}

void World::Step()
{
	for (int i = 0; i < m_entities.size(); i++)
	{
		Mob* element = dynamic_cast<Mob*>(m_entities[i]);
		if (element!= nullptr)
		{
			Vector2 newDirection = *element->GetPos() - Vector2(0.0f, 2.0f);
			element->SetDirection(&newDirection);
			element->Move();
		}
		Player* element1 = dynamic_cast<Player*>(m_entities[i]);
		if (element != nullptr)
		{
			bool mobFound;
			Vector2 mobPos(0.0f,0.0f);
			for (int i = 0; i < m_entities.size(); i++)
			{
				Mob* mob = dynamic_cast<Mob*>(m_entities[i]);
				if (mob != nullptr)
				{
					mobPos = *mob->GetPos();
					break;
				}
			}
			Vector2 newDirection = *element->GetPos() - Vector2(0.0f, 2.0f);
			element->SetDirection(&newDirection);
			element->Move();
		}
	}
}