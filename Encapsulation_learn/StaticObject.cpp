#include "StaticObject.h"
#include <iostream>
#include <sstream>
#include <string>

StaticObject::StaticObject(float x, float y)
{
	Vector2 pos(x, y);
	StaticObject::Entity(pos);
	std::stringstream creationMessage;
	creationMessage << "Static Object just created at x = " << x << " and y = " << y;
	std::cout << creationMessage.str()<<std::endl;
}

StaticObject::~StaticObject()
{}