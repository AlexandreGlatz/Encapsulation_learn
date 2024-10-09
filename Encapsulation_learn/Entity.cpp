#include "pch.h"

Entity::Entity(Vector2* pPos):
	m_pPos(nullptr)
{
	m_pPos = pPos;
}

Entity::~Entity()
{}