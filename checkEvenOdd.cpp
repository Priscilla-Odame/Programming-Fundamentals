#include <iostream>
using namespace std;

void oddFunction(int number);
void evenFunction(int number);

int main(){
	int number;
	cout << "Enter a number : ";
	cin >> number;
	if (number % 2 == 0){
		evenFunction(number);
	}
	else{
		oddFunction(number);
	}
	return 0;
}

void oddFunction(int number){
	int counter =30;
	int i;
	while(counter>0){		
		if(i % number != 0){
			cout << i << endl;
			counter--;
		  }
		i++;
	}
}

void evenFunction(int number){
	for (int j = 0; j <= 20 ; j++){
		cout << j << " x " << number << " = " << j*number << endl;
	}
}
