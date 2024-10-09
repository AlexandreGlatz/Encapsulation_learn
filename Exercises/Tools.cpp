#include "Tools.h"
#include <iostream>
#include <string>
float Round(float value, int precision)
{
	std::string strValue = std::to_string(value);
	std::string strOut;

	for (int i = 0; i < 3 + precision; i++)
	{
		strOut.push_back(strValue[i]);
	}
	if (strValue[strOut.size() + 1] - '0' > 5)
	{
		if (strValue[strOut.size() - 1] - '0' == 9)
		{
			strValue[strOut.size() - 1] = '0';
			strValue[strOut.size() - 2] += 1;
		}
		strOut[strOut.size() - 1] += 1;
	}

	return std::stof(strOut);
}

std::string StringAfterDot(std::string str, int precision)
{
	std::string outStr;
	for (int i = 0; i < 3 + precision; i++)
		outStr.push_back(str[i]);

	return outStr;
}