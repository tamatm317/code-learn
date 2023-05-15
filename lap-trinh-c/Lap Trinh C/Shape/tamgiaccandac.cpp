#include <iostream>
using namespace std;

void intamgiaccandac (int h);

int main(){
	int n;
	do{
		cout << "\nHay nhap do cao h: ";
		cin >> n;
		if ( n<=0){
			cout << "\nVui long nhap h>0 :";
		}
	} while ( n <=1);
	intamgiaccandac(n);
}	

void intamgiaccandac ( int h){
	for ( int i = 1; i<=h; i++){
		for  ( int j =1; j<= 2*h-1; j++){
		if ( (j >= h-i+1) && (j<= h+i-1)){
			cout << "*"; }
		else {
			cout << " ";
		    }	
		}
		cout << endl;
	}
}