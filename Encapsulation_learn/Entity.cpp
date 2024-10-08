#include "Entity.h"

Entity::Entity()
{
	m_pPos = new Vector2(0.0f, 0.0f);
}

Entity::Entity(Vector2* pPos):
	m_pPos(nullptr)
{
	m_pPos = pPos;
}

Entity::~Entity()
{}