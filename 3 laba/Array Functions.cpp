#include "Class Array.h"

void Array::sortup()
{
	for (int i = 0; i < size - 1; i++)
		for (int j = (size - 1); j > i; j--)
			if (arr[j - 1] > arr[j])
			{
				Double temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
}

void Array::sortdown()
{
	for (int i = 0; i < size - 1; i++)
		for (int j = (size - 1); j > i; j--)
			if (arr[j - 1] < arr[j])
			{
				Double temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
}

int Array::getlenght()
{
	return size;
}

void Array::remove(int index)
{
	index--;
	if (index > size)
	{
		cout << "Íîìåð ýëåìåíòà êîòîðûé âû õîòèòå óäàëèòü áîëüøå ðàçìåðà ìàññèâà" << endl;
		return;
	}
	for (int i = index; i < size; i++)
		arr[i] = arr[i + 1];
	size--;
}

void Array::remove(Double num)
{
	int coutdelete = 0;
	for (int i = 0; i < size; i++)
		if (arr[i] == num)
			coutdelete++;
	Double* temp = new Double[size - coutdelete];
	for (int i = 0, j = 0; i < size; i++, j++)
	{
		if (arr[i] == num)
		{
			j--;
			continue;
		}
		else
			temp[j] = arr[i];
	}
	size -= coutdelete;
	for (int i = 0; i < size; i++)
		arr[i] = temp[i];
	delete[] temp;
}

void Array::add(Double x)
{
	Double* temp = new Double[size];
	for (int i = 0; i < size; i++)
		temp[i] = arr[i];
	size++;
	arr = new Double[size];
	for (int i = 0; i < size - 1; i++)
		arr[i] = temp[i];
	arr[size - 1] = x;
	delete[] temp;
}

bool Array::empty()
{
	if (size == 0)
		return 0;
	else 1;

}
Array::Array()
{
	arr = nullptr;
	size = 0;
}

Array::Array(int x)
{
	arr = new Double[x];
	size = x;
}

Array::~Array()
{
	if (arr != nullptr)
	{
		delete[] arr;
	}
}

ostream& operator<<(ostream& out, const Array& x)
{
	for (int i = 0; i < x.size; i++)
	{
		out << x.arr[i] << " ";
	}
	out << endl;
	return out;
}