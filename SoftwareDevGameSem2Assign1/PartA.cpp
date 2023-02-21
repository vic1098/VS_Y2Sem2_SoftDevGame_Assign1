#include <iostream>

using namespace std;

int power(int base, int exponent)
{
	//if (exponent == 0) // would be needed if required to work out 2 exp 0 for example.
	//{
	//	return 1;
	//}	

	if (exponent == 1)
	{
		return base;
	}

	int myAns = base * power(base, exponent - 1);
	return (myAns);

}

int main()
{
	int base = 0, exponent = 0;

	cout << "Please enter an int value for the base part: " << endl;
	cin >> base;

	cout << "Please enter an int value for the exponent part" << endl;
	cin >> exponent;


	int i = power(base, exponent);
	cout << i << endl;
	return 0;
}