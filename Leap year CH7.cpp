#include <iostream>
using namespace std;

int main()
{
	int year;

	// Step 1: Ask user to enter a year
	cout << "Enter a year: ";
	cin >> year;

	// Step 2: Check if year is valid 
	if (year <= 0)
	{
		cout << "Invalid year entered! ";
		return 0; // stop program
	}

	// Step 3: Apply leap year rule
	if ((year % 400 == 0) or (year % 4 == 0 && year % 100 != 0))
	{
		cout << year << "is a Leap year";
	}
	else
	{
		cout << year << " is Not a Leap Year";
	}
	
	return 0;
}
