#include<iostream>
using namespace std;

int main()
{
	double meal = 9.99;
	double burger = 5.69;
	double drink = 1.99;
	double fries = 2.99;

	double total = burger + drink + fries;

	if (total > meal)
	{
		cout << "Meal is cheaper!" << endl;
	}
	return 0;
}
