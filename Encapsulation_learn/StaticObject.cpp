#include "pch.h"
#include <iostream>
#include <sstream>
#include <string>

StaticObject::StaticObject(float x, float y) : Entity(new Vector2(x, y))
{
	std::stringstream creationMessage;
	creationMessage << "Static Object just created at x = " << x << " and y = " << y;
	std::cout << creationMessage.str()<<std::endl;
}

StaticObject::~StaticObject()
{}