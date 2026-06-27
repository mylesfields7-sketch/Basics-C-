#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char light;
	int estimation; // 1 = Safe to stop, 0 = Not safe
	int emergency; // 1 = Yes, 0 = No

	cout << "Enter Light color (R, Y, G): ";
	cin >> light;

	switch (light)
	{
	case 'G':
	{
		cout << "Go\n";
		break;
	}

	case 'Y':
	{
		cout << "Is it safe to stop? (1 = Yes, 0 = No): ";
		cin >> estimation;

		if (estimation == 1)
		{
			cout << "Stop Immediately\n";
		}
		else
		{
			cout << "Proceed with Caution\n";
		}
		break;
	}

	case 'R':
	{
		cout << "Is there an emergency vehicle? (1 = Yes, 0 = No): ";
		cin >> emergency;

		if (emergency == 1)
		{
			cout << "Allow Emergency Vehicle\n";
		}
		else
		{
			cout << "Stop\n";
		}
		break;
	}

	default:
	{
		cout << "Invalid Input\n";
		break;
	}
	}

	return 0;
}

