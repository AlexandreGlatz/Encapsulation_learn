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
	StaticObject* staticObject = new StaticObject(0.0f, 1.0f);
	m_entities.push_back(staticObject);

	BreakableObject* breakableObject = new BreakableObject(0.0f, 0.0f, 1.0f);
	m_entities.push_back(breakableObject);

	Vector2 mobDirection(1.0f, 1.0f);
	Mob* mob = new Mob(-10.0f, 10.0f, 20.0f, &mobDirection);
	m_entities.push_back(mob);

	Vector2 playerPos(-10.0f, -10.0f);
	Vector2 playerDirection(1.0f, 1.0f);
	Player* player= new Player(&playerPos, 10.0f, &playerDirection, 10.0f);
	m_entities.push_back(player);
}

void World::Step()
{
	Mob* pMob = nullptr;
	Player* pPlayer = nullptr;
	BreakableObject* pBreakableObject = nullptr;
	StaticObject* pStaticObject = nullptr;
	for (int i = 0; i < m_entities.size(); i++)
	{
		Entity* pEntity;
		pEntity = dynamic_cast<Mob*>(m_entities[i]);
		if (pEntity != nullptr)
			pMob = dynamic_cast<Mob*>(m_entities[i]);

		pEntity = dynamic_cast<Player*>(m_entities[i]);
		if (pEntity != nullptr)
			pPlayer = dynamic_cast<Player*>(m_entities[i]);

		pEntity = dynamic_cast<BreakableObject*>(m_entities[i]);
		if (pEntity  != nullptr)
			pBreakableObject = dynamic_cast<BreakableObject*>(m_entities[i]);

		pEntity = dynamic_cast<StaticObject*>(m_entities[i]);
		if(pEntity  != nullptr)
			pStaticObject = dynamic_cast<StaticObject*>(m_entities[i]);
	}

	if (pMob->GetHp() > 0 )
	{
		Vector2 newMobDirection = *pBreakableObject->GetPos() - *pMob->GetPos();
		newMobDirection.Normalize();
		pMob->SetDirection(&newMobDirection);
		pMob->Move();

		Vector2 newPlayerDirection = *pMob->GetPos() - *pPlayer->GetPos();
		newPlayerDirection.Normalize();
		pPlayer->SetDirection(&newPlayerDirection);
		pPlayer->Move();

		if (pPlayer->GetPos()->GetDistanceFrom(pMob->GetPos()) < 1.0f)
			pPlayer->Attack(pMob);
	}

	else if (pBreakableObject->GetHp() > 0)
	{
		Vector2 newPlayerDirection = *pBreakableObject->GetPos() - *pPlayer->GetPos();
		newPlayerDirection.Normalize();
		pPlayer->SetDirection(&newPlayerDirection);

		if (pPlayer->GetPos()->GetDistanceFrom(pBreakableObject->GetPos()) < 1.0f)
			pPlayer->Attack(pBreakableObject);
	}

	else
	{
		std::cout << "Simulation completed" << std::endl;
	}
}