#pragma once
#include <iostream>
class Point 
{
public:
	Point();
	~Point();

	float x;
	float y;
	float z;

	std::string ToString();
};