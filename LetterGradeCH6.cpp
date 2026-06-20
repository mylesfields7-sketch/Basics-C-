#include <iostream>
using namespace std;

int main() {
	int grade;
	cout << " Enter numerical grade: ";
	cin >> grade;

	if (grade > 90) {
		cout << "Grade: A" << endl;
	}
	else if (grade > 80) {
		cout << "Grade: B" << endl;
	}
	else if (grade > 70) {
		cout << "Grade: C" << endl;
	}
	else if (grade > 60) {
		cout << "Grade: D" << endl;
	}
	else {
		cout << "Grade: F" << endl;
	}

	return 0;
}