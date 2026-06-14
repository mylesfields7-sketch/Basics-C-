#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x1 = 0, y1 = 0, z1 = 0;
	double x2 = 0, y2 = 0, z2 = 0;

	//midpoint
	double mid_x = (x1 + x2) / 2.0;
	double mid_y = (x1 + x2) / 2.0;
	double mid_z = (x1 + x2) / 2.0;

	cout << "Midpoint: (" << mid_x << ", " << mid_y << ", " << mid_z << ")" << endl;

	return 0;
}