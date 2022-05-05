#include "Rational.h"
#include <iostream>
#include <math.h>

using namespace std;

void Rational::SetA(int value)
{
	if (value > 0)
		pair.SetA(value);
	else
		pair.SetA(0);
}

void Rational::SetB(int value)
{
	if (value > 0)
		pair.SetB(value);
	else
		pair.SetB(0);
}


void Rational::Init(int a, int b)
{

	SetA(a);
	SetB(b);

}

void Rational::Read()
{
	double A, B;

	cout << "a = "; cin >> A;
	cout << "b = "; cin >> B;

}

void Rational::Display() const
{
	pair.Display();
}
Rational Rational::minus(Rational a, Rational b) // (a, b) - (c, d) = (ad - bc, bd)
{
	pair.SetA(a.GetA() * b.GetB() - a.GetB() * b.GetA());
	pair.SetB(a.GetB() * b.GetB());
	cout << "minus = " << endl;
	return *this;
}
Rational Rational::plus(Rational a, Rational b) // (a, b) + (c, d) = (ad + bc, bd)
{
	pair.SetA(a.GetA() * b.GetB() + a.GetB() * b.GetA());
	pair.SetB(a.GetB() * b.GetB());
	cout << "plus = " << endl;
	return *this;
}
Rational Rational::div(Rational a, Rational b) // (a, b) / (c, d) = (ad, bc)
{
	pair.SetA(a.GetA() * b.GetB());
	pair.SetB(a.GetB() * b.GetA());
	cout << "div = " << endl;
	return *this;
}
