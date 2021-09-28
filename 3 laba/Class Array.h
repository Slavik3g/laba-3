#pragma once
#include "Class Double.h"

class Array
{
private:
	Double* arr;
	int size;
public:
	Array();
	Array(int);
	~Array();
	int getlenght();
	void add(Double);
	bool empty();
	void remove(int);
	void remove(Double);
	void sortdown();
	void sortup();
	friend ostream& operator<<(ostream&, const Array&);
	friend void fillinarray(Array& Nums);
};
