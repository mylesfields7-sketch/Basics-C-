#include <iostream>
using namespace std;

int main() {
	int age;

	cout << "Enter age: ";
	cin >> age;

	if (age < 12 || age > 60) {
		cout << "Discount ticket" << endl;
	}
	else
	{
		cout << "Regular ticket" << endl;
	}

	return 0;
}

