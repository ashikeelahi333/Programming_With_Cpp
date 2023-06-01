// Even of odd
#include <iostream>
using namespace std;

int main() {
	int a = -31;
	// Condtion a % 2 == 0 even, a % 2 == 1 odd
	if(a % 2 == 0) {
		cout << a << " is even number" << endl;
	} else {
		cout << a << " is odd number" << endl;
	}
}
