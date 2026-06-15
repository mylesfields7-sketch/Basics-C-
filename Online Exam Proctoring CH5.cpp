#include <iostream>
using namespace std;

int main() {
	bool cameraON = true;
	bool micON = true;

	if (cameraON && micON) {
		cout << "Exam Allowed";
	}
	else {
		cout << "Access Denied";
	}

	return 0;
}