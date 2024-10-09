#pragma once
#include <iostream>
class Point
{
public:
	Point();
	~Point();

	std::string ToString();

private:
	float x;
	float y;
	float z;
};