#pragma once
#include <iostream>
class Integer
{
public:
	Integer();
	Integer(int num);
	~Integer();

	Integer& operator+=(const Integer& other);
	friend Integer operator+(Integer left, const Integer& right);

	Integer& operator-=(const Integer& other);
	friend Integer operator-(Integer left, const Integer& right);

	Integer& operator*=(const Integer& other);
	friend Integer operator*(Integer left, const Integer& right);

	Integer& operator/=(const Integer& other);
	friend Integer operator/(Integer left, const Integer& right);

	Integer& operator%=(const Integer& other);
	friend Integer operator%(Integer left, const Integer& right);

	friend std::ostream& operator<<(std::ostream& os, const Integer& other);

	void pow(const Integer& power);
	int m_integer;
private:
};

