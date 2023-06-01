#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Input 2 numbers: ";
	cin >> a >> b;
	// a = 100, b = 100
	if(a > b) {
		c = a;
	} else {
		c = b;
	}
	cout << "C: " << c << endl;
 	
}


//	if(true) { // condition -> true(1), false(0)
//		cout << "This is true" << endl;
//		cout << "Guan Xiaotong ";
//		cout << "+ Rifat" << endl;
//	}
//	cout << "Hi";
