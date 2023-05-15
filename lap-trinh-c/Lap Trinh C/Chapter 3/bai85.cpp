#include <iostream>
#include <cmath>

using namespace std;
int Kiemtra (int  n);
int main()
{
	int n;
	cout << "\nHay nhap thang : ";
	do {
		cin >> n;
		if ( n<=0 || n>12 ){
			cout << "\nVui long nhap lai thang: ";
		}
	}while ( n<=0 || n>12 );
	cout << "\nThang " << n << " thuoc quy "<< Kiemtra(n) << " trong nam.";
	system("pause");
	return 0;
}

int Kiemtra ( int n)
{
	int s;
	switch (n){
		case 1: case 2: case 3: 
		s = 1;
		break;
		case 4: case 5: case 6:
		s = 2;
		break;
		case 7: case 8: case 9:
		s = 3;
		break;
		case 10: case 11: case 12:
		s = 4;
		break;
	}
	return s;
}