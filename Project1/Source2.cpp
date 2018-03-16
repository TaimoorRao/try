#include <iostream>
#include<string.h>
using namespace std;

struct Student {
	int age;
	float height;
	//String name;
	char name[50];
};

void main(){
	Student s1;
	cout << "Enter Age"<<endl;
	cin >> s1.age;
	cout << "Enter Height" << endl;
	cin >> s1.height;
	cout << "Enter Name" << endl;
	cin.get(s1.name, 50);
	cout << "Age is" <<s1.age<< endl;
	cout << "Height is" << s1.height << endl;
	cout << "Name is" << s1.name << endl;
}