#include <iostream>
using namespace std;

struct Distance {
	int feet;
	float inch;
};
void main() {
	Distance *ptr, d;
	ptr = &d;
	cout << "Enter feet" << endl;
	cin >> ptr->feet;
	cout << "Enter inch " << endl;
	cin >> (*ptr).inch;
	cout << "Display information " << endl;
	cout << "Distance =" << (*ptr).feet << "feet" << (*ptr).inch << "inches" << endl;
	cout << "Address " << &d << endl;
	system("Pause");
	//return 0;
}