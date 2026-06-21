#include <iostream>
using namespace std;

int main()
{
	int players;    // total number of players (N)
	int turn;    // which turn number (1, 2, 3, ...)

	// Step 1: Input 
	cout << "Enter number of players (>=1): ";
	cin >> players;

	cout << "Enter current turn number (>=1): ";
	cin >> turn;

	// Step 2: Validate input
	if (players < 1 or turn < 1)
	{
		cout << "Invalid Input!";
		return 0;
	}

	// Step 3: Compute current player's turn
	int current_player = ((turn - 1) % players) + 1;

	// Step 4: Print Result 
	cout << "Player" << current_player << " 's turn";

	return 0;
}