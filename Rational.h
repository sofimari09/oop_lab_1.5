#pragma once
#include "Pair.h"

class Rational
{
private:
	Pair pair;

public:
	double GetA() const { return pair.GetA(); }
	double GetB() const { return pair.GetB(); }

	void SetA(int value);
	void SetB(int value);

	void Init(int a, int b);
	void Display() const;
	void Read();
	Rational minus(Rational a, Rational b);
	Rational plus(Rational a, Rational b);
	Rational div(Rational a, Rational b);
};
