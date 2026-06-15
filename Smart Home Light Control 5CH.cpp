#include <iostream>
using namespace std;

int main() {
	bool is_night = true;
		bool motion_detected = true;

	if (is_night && motion_detected) {
		cout << "Lights ON" << endl;
	}
	else {
		cout << "Lights OFF" << endl;
	}

	return 0;

}
