#include <iostream>
using namespace std;

int main() {
	int count;
	double price;

	cout << "Enter number of ice cream: ";
	cin >> count;

	cout << "Enter price of icecream: ";
	cin >> price;

	double total = count * price;
	cout << "Total cost = " << total << endl;

	return 0;
}