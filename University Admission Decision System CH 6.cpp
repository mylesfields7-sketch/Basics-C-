#include <iostream>
using namespace std;

int main()
{
	double marks;
	int entrance_exam;
	bool sports_quota;

	//input from user 
	cout << "Enter your overall marks (%): ";
	cin >> marks;

	cout << "Enter your entrance exam score: ";
	cin >> entrance_exam;

	cout << "Do you have sports quota? (1 for Yes, 0 for No): ";
	cin >> sports_quota;

	// Admission decision 
	if (marks >= 85 && entrance_exam >= 80)
	{
		cout << "Admission in Honors Program";
	}
	else
	{
		if (marks >= 70 && entrance_exam >= 60)
		{
			cout << "Admissions in Regular Program";
		}
		else
		{
			if (marks >= 60 && sports_quota == true)
			{
				cout << "Admissions under Sports Quota";
			}
			else
			{
				cout << "Application Rejected";

				return 0;
			}
		}
	}
	

}

