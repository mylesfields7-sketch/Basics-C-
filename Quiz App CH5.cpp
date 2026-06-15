#include <iostream>
using namespace std;

int main() {
	string answer;
	int correctCout = 0;

	cout << "Question 1; What is 5 + 3? ";
	cin >> answer;
	if (answer == "8") {
		correctCout++;

		cout << "Question 2; What is the capital of France? ";
		cin >> answer;
		if (answer == "Paris") {
			correctCout++;

			cout << "Question 3: What is 10 / 2? ";
			cin >> answer;
			if (answer == "5") {
				correctCout++;
			}
			else {
				cout << "Game Over";
				return 0;
			}
		}
		else {
			cout << "Game Over";
			return 0;
		}

		if (correctCout == 3) {
			cout << "You win!";
		}

		return 0;
	}
