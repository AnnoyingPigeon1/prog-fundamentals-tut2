#include "Math.h"
#include <iostream>

int Math::Factorial(int num)
{
	int result = 1;
	for (num; num > 0; num--)
	{
		std::cout << num << "\n";
		result *= num;
	}

	return result;
}

void Math::TimesTable(int num, int range)
{
	for (size_t i = 1; i <= range; i++)
	{
		int result = num * i;
		std::cout << i << " x " << num << " = " << result << "\n";
	}
}

long double Math::Mean(std::vector<double> nums)
{
	double len = 0;
	double all = 0;

	for (double num : nums)
	{
		all += num;
		len++;
	}


	return all / len;
}

long double Math::Lerp(double a, double b, double t)
{
	return (a + (b-a) * t);
}

long double Math::DegreesToRadians(double degrees)
{
	return degrees * 3.1415/180;
}

void Math::MakeSquare(double w, double h)
{
	std::cout << "Width is: " << w << "\n";
	std::cout << "Height is: " << h << "\n";
	std::cout << "Area is: " << h * w << "\n";
}

