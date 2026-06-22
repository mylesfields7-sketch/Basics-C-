#include <iostream>
#include <cstdlib>    // for rand(), srand()
#include <ctime>    // for time ()
using namespace std;

int main()
{
	srand(time(0));
	int dice = (rand() % 6) + 1;
	cout << "You rolled: " << dice << endl;

	return 0;
}