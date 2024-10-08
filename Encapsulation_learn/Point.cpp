#include "Point.h"
#include "Tools.h"
#include <string>
Point::Point() :
	x(0.f),
	y(0.f),
	z(0.f)
{
	int X = 9;

	x = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / X));
	y = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / X));
	z = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / X));
}

Point::~Point()
{}

std::string Point::ToString()
{
	std::string pointCoords = "Point :\nx: " + StringAfterDot(std::to_string(Round(x))) +  "\ny: " + StringAfterDot(std::to_string(Round(y))) + "\nz: " + StringAfterDot(std::to_string(Round(z))) + "\n";
	return pointCoords;
}
