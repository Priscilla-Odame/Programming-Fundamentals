#include <iostream>
using namespace std;

int main() {
	int number;
	int *i = &number;
	int &r = number;
	const int num = 1;

	number = 5;
	++*i;
	++r;
	cout << number <<endl;

	cout << double(0Xf3f2) << endl << double(0437) << endl << double('a') <<endl;

}
