#include <iostream>

using namespace std;

// Function to calculate the greatest common divisor of two numbers
int myGCD(int a, int b)
{
	// If b is 0, return a : (the gcd of a and 0 is a)
	int w = (b == 0 ? a : myGCD(b, a % b));

	return w;
}

int main() {
	// Read in two numbers
	int num1, num2;

	cout << "Enter a value for num1: ";
	cin >> num1;
	cout << endl;

	cout << "Enter a value for num2: ";
	cin >> num2;
	cout << endl;

    // Calculate and output the greatest common divisor of the two numbers
    cout << myGCD(num1, num2) << endl;
}
