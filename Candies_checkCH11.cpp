#include <iostream>
using namespace std;

int main()
{
	int total_candies = 3;
	int candies_eaten = 0;

	while (candies_eaten < total_candies)
	{
		candies_eaten = candies_eaten + 1; // eat one candy
		cout << "candies_eaten = " << candies_eaten << endl;
	}

	cout << "All candies eaten! Total = " << candies_eaten << endl;
	return 0;
}
