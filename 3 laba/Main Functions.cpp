#include "libraries.h"

double getdoubleValue()
{
	double value = 0;

	while (true)
	{
		cin >> value;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			system("cls");
			cout << "Введено неправильное число, повторите ввод" << endl;
		}
		else
		{
			return value;
		}
	}
}

int getintValue()
{
	int value = 0;

	while (true)
	{
		cin >> value;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			system("cls");
			cout << "Введено неправильное число, повторите ввод" << endl;
		}
		else
		{
			return value;
		}
	}
}

void sort(Array& Nums)
{
	cout << "Введите 1 чтобы отсортировать по убыванию" << endl;
	cout << "Введите 2 чтобы отсортировать по возрастанию" << endl;
	cout << "Введите любое другое число чтобы выйти" << endl;
	int choose = getintValue();
	if (choose == 1)
	{
		Nums.sortdown();
	}
	else if (choose == 2)
	{
		Nums.sortup();
	}
	else
	{
		return;
	}
}

void chooseinstr()
{
	cout << "Введите 1 чтобы добавить элемент" << endl;
	cout << "Введите 2 чтобы удалить элемент по значению" << endl;
	cout << "Введите 3 чтобы удалить элемент по индексу" << endl;
	cout << "Введите 4 чтобы вывести массив на экран" << endl;
	cout << "Введите 5 чтобы отсортировать массив" << endl;
	cout << "Введите 6 чтобы выйти из программы" << endl;
}

void fillinarray(Array& Nums)
{
	for (int i = 0; i < Nums.getlenght(); i++)
	{
		Nums.arr[i] = round((double)rand()) / 100.0;
	}
}

void performance(Array& Nums, int choose)
{
	Double value;
	int index;
	switch (choose)
	{
	case 1:
		system("CLS");
		cout << "Введите число которое хотите добавить" << endl;
		value = getdoubleValue();
		Nums.add(value);
		break;
	case 2:
		system("CLS");
		if (Nums.empty())
		{
			cout << "Массив пуст" << endl;
			break;
		}
		cout << "Введите число которое хотите удалить" << endl;
		value = getdoubleValue();
		Nums.remove(value);
		break;
	case 3:
		system("CLS");
		if (Nums.empty())
		{
			cout << "Массив пуст" << endl;
			break;
		}
		cout << "Введите индекс числа которое хотите удалить" << endl;
		index = getintValue();
		Nums.remove(index);
		break;
	case 4:
		system("CLS");
		if (Nums.empty())
		{
			cout << "Массив пуст" << endl;
			break;
		}
		cout << Nums;
		break;
	case 5:
		system("CLS");
		if (Nums.empty())
		{
			cout << "Массив пуст" << endl;
			break;
		}
		sort(Nums);
		break;
	case 6:
		system("CLS");
		Nums.~Array();
		exit(0);
	default:
		break;
	}
}