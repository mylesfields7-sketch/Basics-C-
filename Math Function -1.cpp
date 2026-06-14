#include <iostream> // lets us use cout and cin
#include <cmath> // lets us use sqrt()
using namespace std;

int main()

{
	double number;
	cout << "Enter a positive number: ";
	cin >> number;

	double root = sqrt(number);

	cout << "Square root of " << number << " is " << root << endl;

	return 0;

}