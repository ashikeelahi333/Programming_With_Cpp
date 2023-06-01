#include <iostream>
using namespace std;

int main() {
	int a = 10, b = 20, c = 20;
	
//	&& - Logical And
	if(a > b && a > c) {
		cout << "Large number is " << a << endl;
	} else if(b > c) {
		cout << "Large number is " << b << endl;
	} else {
		cout << "Large number is " << c << endl;
	}
	
	int marks = 85;
	if(marks > 80) {
		cout << "A+";
	} else if (marks > 70) {
		cout << "A";
	} else if (marks > 60) {
		cout << "A-";
	} else if(marks > 50) {
		cout << "B";
	} else if (marks > 40) {
		cout << "C";
	} else if (marks > 33) {
		cout << "D";
	} else {
		cout << "F";
	}
}
