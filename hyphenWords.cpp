#include <iostream>
using namespace std;

char word[200];
int main(){
	cout << "Enter word: ";
	cin >> word;

	int count = 0;
	string divide = "";
	int i;

	for(i=0;  i< 200; i++){
		if(word[i] == '-'){
			cout << "["<< count << "]" << divide << endl;
	 		divide = "";
			count = 0;
		}
		else {
			divide = divide+word[i];
			count++;
		}
	
	}
	//have to fix printing out the last word
	cout << "[]" << divide << endl;
	return 0;
}
