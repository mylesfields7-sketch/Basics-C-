#include <iostream>
using namespace std;

int main() {
	int numNotebooks, numPens;
	double notebookPrice, penPrice;

	cout << "Enter number of notebooks: ";
	cin >> numNotebooks;

	cout << "Enter number of pens: ";
	cin >> numPens;

	cout << "Enter price of one notebook: ";
	cin >> notebookPrice;

	cout << "Enter price of one pen: ";
	cin >> penPrice;

	double totalCost = (numNotebooks * notebookPrice) + (numPens * penPrice);

	cout << "Total cost: $" << totalCost << endl;

	return 0;
}
