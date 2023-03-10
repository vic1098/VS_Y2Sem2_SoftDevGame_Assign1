#include <iostream>

using namespace std;

// Function to calculate the greatest common divisor of two numbers using recursion
int myGCD(int a, int b)
{
    // If b is 0, return a : (the gcd of a and 0 is a)
    int w = (b == 0 ? a : myGCD(b, a % b));

    return w;
}

// Function to calculate the least common multiple of two numbers using recursion
int myLCM(int a, int b)
{
    // Return the product of the two numbers divided by their gcd
    int f = ((a * b) / myGCD(a, b));

    return f;
}

int main()
{
    // Read in two numbers
    int num1, num2;

    cout << "Enter a value for num1: ";
    cin >> num1;
    cout << endl;

    cout << "Enter a value for num2: ";
    cin >> num2;
    cout << endl;

    // Calculate the least common multiple of the two numbers
    cout << myLCM(num1, num2) << endl;
}
// for recursion do the below
// it tests
// condition ? true : false
// if condition true, return left hand side of :
// if condition false, return right hand side