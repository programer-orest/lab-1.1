#pragma once

class FloatRange
{
	double first,
		second;
public:
	double GetFirst() const { return first; }
	double GetSecond() const { return second; }
	void SetFirst(double value) { first = value; }
	void SetSecond(double value) { second = value; }

	bool Init(double L, double R);
	void Display() const;
	void Read();

	bool rangeCheck(double number);
	void rangeCheckResult(bool result);
};


