#pragma once
#include <iostream>
class Vector2 {
public:
	Vector2(float x, float y);
	~Vector2();
	
	void SetVector(float& x, float& y);
	float GetX() { return m_x; }
	float GetY() { return m_y; }

	Vector2& operator*=(const float& other);
	Vector2& operator*(const float& other);

	Vector2& operator+=(const Vector2& other);
	Vector2& operator+(const Vector2& other);

private:
	float m_x;
	float m_y;
};