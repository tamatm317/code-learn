#include <iostream>
#include <cmath>
using namespace std;

int Tinhtong (int n);
int main ()
{
	int n;
	cout << "|nHay nhap n: ";
	do{
		cin >> n;
		if ( n<= 0){
			cout << "\nVui long nhap lai n: ";
		}
	}while (n<=0);
	cout << "\nGia tri cua S(n) la: " << Tinhtong(n);
	system("pause");
	return 0;
}

int Tinhtong(int n)
{
	int s = 0;
	for ( int i =1; i<=n; i++)
	{
		s = s + pow ( i,3);
	}
	return s;
}