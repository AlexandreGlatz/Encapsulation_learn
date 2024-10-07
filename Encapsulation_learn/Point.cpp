#include "Point.h"
#include "Tools.h"
#include <string>
Point::Point() :
	x(0),
	y(0),
	z(0)
{}

Point::~Point()
{}

std::string Point::ToString()
{
	std::string pointCoords = "Point :\nx: " + StringAfterDot(std::to_string(Round(x))) +  "\ny: " + StringAfterDot(std::to_string(Round(y))) + "\nz: " + StringAfterDot(std::to_string(Round(z))) + "\n";
	return pointCoords;
}
