#include <iostream>

using namespace std;


int power(int a, int b)
{
	/*int c = b;

	cout << "Power(" << a << ", " << b << ") is equal to: " << endl;

	while (c >= 2)
	{
		cout << a << " * ";

		if (c == 2)
		{
			cout << a;
		}
		c--;
	}
	cout << endl;

	int d = pow(a, b);

	cout << "Answer = " << d << endl;


	return (a);*/

	int myAns;

	if (a == 1) {return b;}
	else {myAns = b * power(a, b - 1);}
	return myAns;
}


int main()
{
	int base, exponent;

	cout << "Please enter an int value for the base part: " << endl;
	cin >> base;

	cout << "Please enter an int value for the exponent part" << endl;
	cin >> exponent;


	power(base, exponent);

}