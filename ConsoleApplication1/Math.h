#pragma once
#include <vector>
class Math
{
public:
	static int Factorial(int num);
	static void TimesTable(int num, int range);
	static long double Mean(std::vector<double> nums);
	static long double Lerp(double a, double b, double t);
	static long double DegreesToRadians(double degrees);
	static void MakeSquare(double w, double h);
};

