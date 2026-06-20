# include <iostream>
using namespace std;

int main()
{
	int age;
	int citizen; // 1= Yes, 0=No

	cout << "Enter your age: ";
	cin >> age;

	cout << "Are you a US Citizen? (1 for Yes, 0 for No): ";
	cin >> citizen;

	if (age >= 18)
	{
		if (citizen == 1)
		{
			cout << "You are elgible to vote.";
		}
		else
		{
			cout << "You must be a citizen to vote. ";
		}
	}
	else
	{
		cout << "You are not old enough to vote. ";
	}

	return 0;
}

