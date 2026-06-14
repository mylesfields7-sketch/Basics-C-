#include <iostream>
using namespace std;

int main() {
	// Step 1 & 2: Declare and define variables for the three sides
	double side_1 = 4.2;
	double side_2 = 5.6;
	double side_3 = 7;

	// Step 3: Calculate the perimeter 
	double perimeter = side_1 + side_2 + side_3;

	// Step 4: Calculate the area (right triangle formula)
	double area = 0.5 * side_1 * side_2;

	//Step 5: Print the Results
	cout << "Perimeter: " << perimeter << endl;
	cout << "Area: " << area << endl;

	return 0;
}