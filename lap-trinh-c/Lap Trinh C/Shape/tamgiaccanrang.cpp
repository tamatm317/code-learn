#include <iostream>
using namespace std;

void tamgiacrong (int h);
void tamgiaccanrong ( int h);
void hinhchunhatdac (int l, int w);
void hinhchunhatrong ( int l, int w);
int main(){
	int n;
	do{
		cout << "\nHay nhap do cao h: ";
		cin >> n;
		if ( n<=0){
			cout << "\nVui long nhap h>0 :";
		}
	} while ( n <=1);
	cout << "\n\n\t\t XUAT TAM GIAC CAN DAC\n";
	tamgiacrong(n);
	cout << "\n\n\t\tXUAT TAM GIA CAN RONG\n";
	tamgiaccanrong(n);
	int l,w;
	cout << "\nHay nhap chieu dai: ";
	cin >> l;
	cout << "\nHay nhap chieu rong: ";
	cin >> w;
	cout << "\n\n\t\tXUAT HINH CHU NHAT DAC\n";
	hinhchunhatdac(l,w);
	cout << "\n\n\t\tXUAT HINH CHU NHAT RONG\n";
	hinhchunhatrong(l,w);
	system("pause");
	return 0;
}

void tamgiacrong ( int h){
	for ( int i=1; i<=h; i++){
		for ( int j=1; j<=h; j++){
			if ( j == i || i == h || j == 1){
				cout << "* ";
			}
			else{
				cout << "  ";
			}
		}
		cout << endl;
	}
}

void tamgiaccanrong ( int h){
	for ( int i =1; i<=h; i++){
		for ( int j =1; j<=2*h-1; j++){
			if ( j == h-i+1 || j==h+i-1 || i==h){
				cout << "* ";
			}
			else{
				cout << "  ";
			}
		}
		cout << endl;
	}
}

void hinhchunhatdac ( int l, int w){
	for ( int i=1; i<=w; i++){
		for ( int j=1; j<=l; j++){
			if (j<=l){
				cout << "* ";
			}
		}
	cout << endl;
	}
}

void hinhchunhatrong ( int l, int w){
	for (int i=1; i<=w; i++){
		for ( int j =1; j<=l; j++){
			if ( j == 1 || i == 1 || i==w || j == l ){
				cout << "* ";
			}
			else{
				cout << "  ";
			}
		}
		cout << endl;
	}
}