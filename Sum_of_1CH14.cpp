#include <iostream>
using namespace std;

int main()
{
	int limit;
	cout << "Enter the limit : ";
	cin >> limit;

	int total = 0; // Initialize accumulator

	for (int count = 1; count <= limit; count++)
	{
		//cout << "loop value " << count << " + " << total;
		// Try this to see the values in each loop

		total = total + count; // or total += count;

		//cout << " = " << total << endl;
		// Try this to see the values in each loop
	}

	cout << "Sum = " << total << "\n";
	return 0;
}
