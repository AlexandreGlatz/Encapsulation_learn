#include "Integer.h"

Integer::Integer():
	m_integer(0)
{}

Integer::Integer(int num):
	m_integer(num)
{}

Integer::~Integer()
{}

Integer& Integer::operator+=(const Integer& other)
{
	this->m_integer += other.m_integer;
	return *this;
}

Integer operator+(Integer left, const Integer& right)
{
	left += right;
	return left;
}

Integer& Integer::operator-=(const Integer& other)
{
	this->m_integer -= other.m_integer;
	return *this;
}

Integer operator-(Integer left, const Integer& right)
{
	left -= right;
	return left;
}

Integer& Integer::operator*=(const Integer& other)
{
	this->m_integer *= other.m_integer;
	return *this;
}

Integer operator*(Integer left, const Integer& right)
{
	left *= right;
	return left;
}

Integer& Integer::operator/=(const Integer& other)
{
	this->m_integer /= other.m_integer;
	return *this;
}

Integer operator/(Integer left, const Integer& right)
{
	left /= right;
	return left;
}

Integer& Integer::operator%=(const Integer& other)
{
	this->m_integer %= other.m_integer;
	return *this;
}

Integer operator%(Integer left, const Integer& right)
{
	left %= right;
	return left;
}

std::ostream& operator<<(std::ostream& os, const Integer& other)
{
	os << other.m_integer;
	return os;
}

void Integer::pow(const Integer& power)
{
	int startInt = m_integer;
	for (int i = 0; i < power.m_integer; i++)
		m_integer *= startInt;
}