#include <iostream>
using namespace std;

int main()
{
	int number;

	// Input from the user
	cout << "Enter a number: ";
	cin >> number;

	// Check if the number is positive 
	if (number > 0)
	{
		cout << "The number is positive" << endl;
	}

	// Check if the number is negative 
	if (number < 0)
	{
		cout << "The number is negative" << endl;
	}

	// Check if the number is zero
	if (number == 0)
	{
		cout << "The number is zero" << endl;
	}

	return 0;
}