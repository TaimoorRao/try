#include <iostream>
#include<string.h>
using namespace std;

struct Student {
	int age;
	float height;
	//String name;
	char name[50];
};

void main() {
	Student *ptr, d;
	ptr = &d;
	cout << "Enter age " << endl;
	cin >> ptr->age;
	cout << "Enter height" << endl;
	cin >> ptr->height;
	cout << "Enter Name" << endl;
	cin.get(ptr->name, 50);
	cout << "Age is" << ptr->age << endl;
	cout << "Height is" << ptr->height << endl;
	cout << "Name is" << ptr->name << endl;


}

