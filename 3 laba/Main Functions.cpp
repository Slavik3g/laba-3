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
			cout << "Ââåäåíî íåïðàâèëüíîå ÷èñëî, ïîâòîðèòå ââîä" << endl;
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
			cout << "Ââåäåíî íåïðàâèëüíîå ÷èñëî, ïîâòîðèòå ââîä" << endl;
		}
		else
		{
			return value;
		}
	}
}

void sort(Array& Nums)
{
	cout << "Ââåäèòå 1 ÷òîáû îòñîðòèðîâàòü ïî óáûâàíèþ" << endl;
	cout << "Ââåäèòå 2 ÷òîáû îòñîðòèðîâàòü ïî âîçðàñòàíèþ" << endl;
	cout << "Ââåäèòå ëþáîå äðóãîå ÷èñëî ÷òîáû âûéòè" << endl;
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
	cout << "Ââåäèòå 1 ÷òîáû äîáàâèòü ýëåìåíò" << endl;
	cout << "Ââåäèòå 2 ÷òîáû óäàëèòü ýëåìåíò ïî çíà÷åíèþ" << endl;
	cout << "Ââåäèòå 3 ÷òîáû óäàëèòü ýëåìåíò ïî èíäåêñó" << endl;
	cout << "Ââåäèòå 4 ÷òîáû âûâåñòè ìàññèâ íà ýêðàí" << endl;
	cout << "Ââåäèòå 5 ÷òîáû îòñîðòèðîâàòü ìàññèâ" << endl;
	cout << "Ââåäèòå 6 ÷òîáû âûéòè èç ïðîãðàììû" << endl;
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
		cout << "Ââåäèòå ÷èñëî êîòîðîå õîòèòå äîáàâèòü" << endl;
		value = getdoubleValue();
		Nums.add(value);
		break;
	case 2:
		system("CLS");
		if (!Nums.empty())
		{
			cout << "Ìàññèâ ïóñò" << endl;
			break;
		}
		cout << "Ââåäèòå ÷èñëî êîòîðîå õîòèòå óäàëèòü" << endl;
		value = getdoubleValue();
		Nums.remove(value);
		break;
	case 3:
		system("CLS");
		if (!Nums.empty())
		{
			cout << "Ìàññèâ ïóñò" << endl;
			break;
		}
		cout << "Ââåäèòå èíäåêñ ÷èñëà êîòîðîå õîòèòå óäàëèòü" << endl;
		index = getintValue();
		Nums.remove(index);
		break;
	case 4:
		system("CLS");
		if (!Nums.empty())
		{
			cout << "Ìàññèâ ïóñò" << endl;
			break;
		}
		cout << Nums;
		break;
	case 5:
		system("CLS");
		if (!Nums.empty())
		{
			cout << "Ìàññèâ ïóñò" << endl;
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