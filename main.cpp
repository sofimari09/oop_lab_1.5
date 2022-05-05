#include "Rational.h"
#include "Pair.h"
#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

int main()
{

	Pair pair;
	Pair a, b, c, d, m;
	pair.Read();
	a.Read();
	b.Read();
	pair.Display();
	c = d.minus(a, b);
	c.Display();
	m = d.multiply(a, b);
	m.Display();
	if (pair.equal(a, b))
		cout << "values are equal" << endl;
	else
		cout << "values are not equal" << endl;

	Rational x, y, R, P, D, M;
	x.SetA(2);
	y.SetB(7);
	x.SetB(3);
	y.SetA(5);
	P = R.plus(x, y);
	P.Display();
	D = R.div(x, y);
	D.Display();
	M = R.minus(x, y);
	M.Display();
	cin.get();
	return 0;

}

