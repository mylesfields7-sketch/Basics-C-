#include <iostream>
using namespace std;

int main() {
	double price1, price2, price3; 
	int quantity1, quantity2, quantity3;

	cout << "Enter item 1 price: ";
	cin >> price1;
	cout << "Enter item 1 quantity: ";
	cin >> quantity1;

	cout << "Enter item 2 price: ";
	cin >> price2;
	cout << "Enter item 2 quantity: ";
	cin >> quantity2;

	cout << "Enter price of item 3 price: ";
	cin >> price3;
	cout << "Enter item 3 quantity: ";
	cin >> quantity3;

	double total = (price1 * quantity1) + (price2 * quantity2) + (price3 * quantity3);

	cout << "===============================" << endl;
	cout << "Total bill = $" << total << endl;

	return 0;
}
