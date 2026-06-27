#include <iostream>
using namespace std;

int main()
{
	int counter = 1; // start counting from 1
	int totalSum = 0; // will hold the sum of numbers

	while (counter <= 5) // repeat as long as counter is 5 or less
	{
		totalSum = totalSum + counter; // add current counter to totalSum
		counter = counter + 1; // increase counter by 1
	}

	cout << "Sum = " << totalSum << endl; // display the final sum

	return 0;
}
