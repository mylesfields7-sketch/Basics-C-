#include <iostream>
using namespace std;

int main()
{
	int first_number, second_number, result;
	char operation;

	cout << "Enter the first number: ";
	cin >> first_number;

	cout << "Enter the operation (+, -, *, /): ";
	cin >> operation;

	cout << "Enter the second number: ";
	cin >> second_number;

	switch (operation)
	{
	case '+':
			result = first_number + second_number;
			cout << "Result = " << result << endl;
			break;

	case '-':
			result = first_number - second_number;
			cout << "Result = " << result << endl;
			break;

		default:
			cout << "Invalid operator" << endl; 


	}

}