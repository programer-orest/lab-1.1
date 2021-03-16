#include "FloatRange.h"
#include <iostream>

using namespace std;

bool FloatRange::Init(double L, double R)
{
	bool tmp;
	if (L < R)
	{
		first = L;
		second = R;
		tmp = true;
	}
	else
		tmp = false;
	return tmp;
}
void FloatRange::Read()
{
	double first, second;

	do
	{
		cout << "First = "; cin >> first;
		cout << "Second = "; cin >> second;
	} while (!Init(first, second));
}
void FloatRange::Display() const
{
	cout << "\nFirst = " << GetFirst() << endl;
	cout << "Second = " << GetSecond() << endl;
}
bool FloatRange::rangeCheck(double number)
{
	if (number >= GetFirst() && number <= GetSecond())
		return 1;
	else
		return 0;
}
void FloatRange::rangeCheckResult(bool result)
{
	if (result)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

