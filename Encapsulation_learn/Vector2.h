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
	friend Vector2 operator*(Vector2 left, const float& right);

	Vector2& operator+=(const Vector2& other);
	friend Vector2 operator+(Vector2 left, const Vector2& right);

	Vector2& operator-=(const Vector2& other);
	friend Vector2 operator-(Vector2 left, const Vector2& right);
private:
	float m_x;
	float m_y;
};