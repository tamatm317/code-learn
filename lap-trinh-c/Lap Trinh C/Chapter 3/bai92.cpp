#include <iostream>
#include <cmath>
using namespace std;
int UCLN (int a, int b);
int main (){
	int a,b;
	cout << "\nHay nhap gia tri so nguyen duong a: " ;
	do {
		cin >> a;
		if ( a<=0 ){
			cout << "\nVui long nhap n lon hon 0: "; }
		} while ( a<= 0);
	cout << "\nHay nhap gia tri so nguyen duong b: " ;
    do {
		cin >> b ;
		if ( b <= 0){
			cout << "\nVui long nhap m lon hon 0: "; }
		} while ( b<= 0);
	cout << "UCLN la: " << UCLN(a,b) << "  ";
	system("pause");
	return 0;
}

int UCLN(int a, int b)
{
	if ( a<b ){
		for ( int i = a; i>=1; i--){
			if ( a%i == 0 && b%i == 0){
				return i;
			}
		}
	}
	else;
	{
		for (int i = b; i>=1; i--){
			if ( b%i == 0 && a%i == 0){
				return i;
			}
		}
	}
}