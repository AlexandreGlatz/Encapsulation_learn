#include "pch.h"
#include "Vector2.h"
#include <math.h>
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

void Vector2::Normalize()
{
	float invNorm = 1 / GetNorm();
	m_x *= invNorm;
	m_y *= invNorm;
}

float Vector2::GetNormSquared() const { return m_x * m_x + m_y * m_y; }

float Vector2::GetNorm() const { return sqrtf(GetNormSquared()); }

float Vector2::GetDistanceFrom(const Vector2* other)
{
	return sqrtf((other->m_x - m_x) * (other->m_x - m_x) + (other->m_y - m_y) * (other->m_y - m_y));
}

Vector2& Vector2::operator*=(const float& other)
{
	m_x *= other;
	m_y *= other;
	return *this;
}

Vector2 operator*(Vector2 left, const float& right)
{
	left *= right;
	return left;
}

Vector2& Vector2::operator+=(const Vector2& other)
{
	m_x += other.m_x;
	m_y += other.m_y;
	return *this;
}

Vector2 operator+(Vector2 left, const Vector2& right)
{
	left += right;
	return left;
}

Vector2& Vector2::operator-=(const Vector2& other)
{
	m_x -= other.m_x;
	m_y -= other.m_y;
	return *this;
}

Vector2 operator-(Vector2 left, const Vector2& right)
{
	left -= right;
	return left;
}