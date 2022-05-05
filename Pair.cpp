#include "Pair.h"
#include <iostream>

using namespace std;

void Pair::SetA(int value)
{
	first = value;
}

void Pair::SetB(int value)
{
	second = value;
}

bool Pair::Init(int first1, int second1)
{
	if ((-100 <= first <= 100) && (-100 <= second <= 100))
	{
		first = first1;
		second = second1;
		return true;
	}
	else
		return false;
}

void Pair::Read()
{
	int a, b;
	do
	{
		cout << "enter a = "; cin >> a;
		cout << "enter b = "; cin >> b;
	} while (!(Init(a, b)));
}

Pair Pair::minus(Pair a, Pair b) //(a, b) - (c, d) = (a - c, b - d)
{
	Pair tmp;
	tmp.first = a.first - b.first;
	tmp.second = a.second - b.second;
	cout << "Minus = " << endl;
	return tmp;

}

Pair Pair::multiply(Pair a, Pair b)
{
	Pair tmp;
	tmp.first = a.first * b.first;
	tmp.second = a.second * b.second;
	cout << "Multiply = " << endl;
	return tmp;

}

void Pair::Display() const
{
	cout << "a = " << first << endl;
	cout << "b = " << second << endl;
}

bool Pair::equal(Pair a, Pair b)
{

	if (a.first == b.first && a.second == b.second)
		return true;
	else
		return false;
}

