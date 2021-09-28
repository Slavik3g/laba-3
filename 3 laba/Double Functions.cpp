#include "Class Double.h"

bool Double::operator>(Double x)
{
	return value > x.value;
}

bool Double::operator<(Double x)
{
	return value < x.value;
}

bool  Double::operator==(Double x)
{
	return x.value == value;
}

double Double::operator-(double x)
{
	value = value - x;
	return value;
}

double Double::operator*(double x)
{
	value = value * x;
	return value;
}

double Double::operator/(double x)
{
	value = value / x;
	return value;
}

double Double::operator+(double x)
{
	value = value + x;
	return value;
}

double Double::operator=(double x)
{
	value = x;
	return value;
}

bool Double::operator==(double x)
{
	return value == x;
}

bool Double::operator!=(double x)
{
	return value != x;
}

Double::Double()
{
	value = 0;
}

Double::Double(double x)
{
	value = x;
}

ostream& operator<< (ostream& out, const Double& x)
{
	out << x.value;
	return out;
}

istream& operator>> (istream& in, const Double& x)
{
	in >> x.value;
	return in;
}