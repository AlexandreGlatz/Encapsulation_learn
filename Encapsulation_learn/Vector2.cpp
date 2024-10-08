#include "Vector2.h"

Vector2::Vector2(float x, float y):
	m_x(0),
	m_y(0)
{
	m_x = x;
	m_y = y;
}

Vector2::~Vector2()
{}

void Vector2::SetVector(float& x, float& y)
{
	m_x = x;
	m_y = y;
}

Vector2& Vector2::operator*=(const float& other)
{
	this->m_x *= other;
	this->m_y *= other;
	return *this;
}

Vector2& Vector2::operator*(const float& other)
{
	*this *= other;
	return *this;
}

Vector2& Vector2::operator+=(const Vector2& other)
{
	this->m_x += m_x;
	this->m_y += m_y;
	return *this;
}

Vector2& Vector2::operator+(const Vector2& other)
{
	*this += other;
	return *this;
}