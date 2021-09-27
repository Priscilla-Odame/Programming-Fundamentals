#include <iostream>
#include <string>
using namespace std;

enum {RED, YELLOW, AMBER=YELLOW, GREEN}c;
string color;
int main(){
	cout << "Enter color(RED, YELLOW, AMBER, GREEN): ";
       cin >> color;
	if(color == "RED"){
		c = RED;
		cout<< c <<endl;
	}
 	else if (color == "YELLOW"){
		c= YELLOW;
		cout << c << endl;
	}	
	else if (color == "AMBER"){
		c = AMBER;
		cout << c << endl;
	}
	else if (color == "GREEN"){
		c = GREEN;
		cout << c << endl;
	}
	else {
		cout << "The color you entered is not in the enum!!!";
	}
}
