#include <iostream>
using namespace std;

int main()
{
	string light;    // Green / Yellow / Red
	int estimation;   // For Yellow: 1= Safe to stop, 0 = Not Safe
	bool emergency_vehicle; // For Red: true = Yes, false = No

	cout << "Enter traffic light color (Green/Yellow/Red): ";
	cin >> light;

	if (light == "Green")
	{
		cout << "Go";
	}
	else if (light == "Yellow")
	{
		cout << "Enter estimation (1 = Safe to stop, 0 = Not Safe): ";
		cin >> estimation;

		if (estimation == 1)
		{
			cout << "Stop immediately";
		}
		else
		{
			cout << "Proceed with Caution";
		}
	}
	else if (light == "Red")
	{

		cout << " Is there an emergency vehicle? (1= Yes, 0= No): ";
		cin >> emergency_vehicle; //direct input into bool

		if (emergency_vehicle)   // no need == 1
		{
			cout << "Allow Emergency Vehicle";
		}
		else
		{
			cout << "Stop";
		}
	}
	else
	{
		cout << "Invalid Input";
	}

	return 0;
}


