#pragma once
#include <iostream>

using namespace std;

class Double
{
private:
	double value;
public:
	Double();
	Double(double);
	bool operator==(double);
	bool operator!=(double);
	double operator=(double);
	double operator+(double);
	double operator-(double);
	double operator*(double);
	double operator/(double);
	bool operator==(Double);
	bool operator>(Double);
	bool operator<(Double);
	friend ostream& operator<<(ostream&, const Double&);
	friend istream& operator>>(istream&, const Double&);
};
