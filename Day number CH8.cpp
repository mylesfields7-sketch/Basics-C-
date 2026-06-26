#include <iostream>
using namespace std;

int main()
{
	int day_number;
	cout << "Enter day number (1= Monday. 2= Tuesday. 3= Wednesday.";
	cin >> day_number;

	switch (day_number)
	{
	case 1:
		cout << "Monday\n";
		break;
	case 2:
		cout << "Tuesday\n";
	case 3:
		cout << "Wednesday\n";
	default:
		cout << "Invalid day\n";
	}

	return 0;
}



