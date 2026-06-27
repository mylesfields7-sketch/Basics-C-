#include <iostream>
using namespace std;

int main()
{
	int number; // variable to store the user's number

	// ask the user to enter a number
	cout << "Enter a number: ";
	cin >> number;

	int counter = 1; // start from 1

	while (counter <= number) // loop runs until counter reaches the user's number
	{
		cout << counter << endl;
		counter = counter + 1;
	}

	return 0;
}