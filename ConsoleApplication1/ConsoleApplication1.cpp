#include <iostream>
#include "Math.h"

using namespace std;
int main()
{
	cout << 5 + 5 << "\n"; //prints "10"
	cout << 355 / 113 << "\n"; //equals pi but prints 3 because it is rounding to the nearest int
	cout << 355.0f / 113.0f << "\n"; //converts the literals to floats, so the answer will not be rounded, outputting pi
	int x = Math::Factorial(5);
	cout << x << "\n"; //outputs 120

	Math::TimesTable(6, 12);

	cout << ((919 * -1) - 6) / 2.56 << "\n"; //outputs -361.328

	std::vector<double> nums;
	nums.push_back(15);
	nums.push_back(25);
	nums.push_back(30);
	nums.push_back(20);

	cout << Math::Mean(nums) << "\n"; //outputs 22.5

	cout << (1.0f / 2.0f) + (3.0f / 4.0f) << "\n"; //outputs 1.25

	cout << pow(73, 2) << "\n"; //outputs 5329
	cout << pow(73, 4) << "\n"; //outputs 2.83982e+07 (scientific notation)

	cout << Math::Lerp(10, 20, 0.35) << "\n"; //outputs 13.5

	cout << 0.43 * 18 << "\n"; //outputs 7.74
	cout << Math::DegreesToRadians(65) << "\n"; //outputs 1.13443


	float playerSpeed = 0;
	playerSpeed += 10.0f;
	cout << playerSpeed << "\n"; //outputs 10


	Math::MakeSquare(10, 30); /*outputs
	*							Width is : 10
	*							Height is : 30
	*							Area is : 300*/

}
