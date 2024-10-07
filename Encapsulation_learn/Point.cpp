#include "Point.h"
#include "Tools.h"
#include <string>
std::string Point::ToString()
{
	std::string pointCoords = "Point :\nx: " + StringAfterDot(std::to_string(Round(x))) +  "\ny: " + StringAfterDot(std::to_string(Round(y))) + "\nz: " + StringAfterDot(std::to_string(Round(z))) + "\n";
	return pointCoords;
}