#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class Pair
{
private:
	int first;
	int second;
public:
	double GetA() const { return first; }
	double GetB() const { return second; }

	void SetA(int value);
	void SetB(int value);

	bool Init(int first, int second);
	void Display() const;
	void Read();

	bool equal(Pair a, Pair b);
	Pair minus(Pair a, Pair b);
	Pair multiply(Pair a, Pair b);
};
