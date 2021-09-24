#include <iostream>
using namespace std;

void mean(int num[]);
void median(int num[]);
void mode(int num[]);
void sort(int num[]);

int num[5];

int main(){
	for(int i=0; i<5; i++){
		cout << "Enter No." <<i+1 << ":";
		cin >>num[i];
	}
	mean(num);
	median(num);
}

void mean(int num[]){
	double m = 0;
	for (int i = 0; i<5; i++){
		m = m + num[i];
	}
	double meanValue = m/5;
	cout << "The mean is " << meanValue <<endl;
}

void median(int num[]){
	for(int i =0; i < 5; i++){
		for(int j=i+1; j<5; j++){
			if (num[i] > num[j]){
				int tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	
	for (int a=0; a<5; a++){
		cout << "The sorted values are: "  << num[a] << endl;
	}

	cout << "The median is " << num[2] << endl;
}

void mode(int num[]){
	int fnumber = 0;
	for(int i = 0; i<5; i++){

	}
}
