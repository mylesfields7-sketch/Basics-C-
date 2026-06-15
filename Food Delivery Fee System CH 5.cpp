#include <iostream>
using namespace std;

int main() {
	double orderAmount = 35.00;

	if (orderAmount >= 50) {
		cout << "Free delivery";
	}
	else if (orderAmount >= 20) {
		cout << "Delievery fee: $5";
	}
	else {
		cout << "Delievery fee: $10";
	}

	return 0;
}