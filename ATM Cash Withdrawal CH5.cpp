#include <iostream>
using namespace std;

int main() {
	double balance = 500.00;
	double amount;

	cout << "Enter amount to withdraw: ";
	cin >> amount;

		if (amount <= balance) {
			cout << "Transaction Successful" << endl;
		}
		else {
			cout << "Insufficient Funds" << endl;
		}

	return 0;
}



