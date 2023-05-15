#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x,n;
	cout << "\nHay nhap x:";
	cin >> x;
	cout << "\nHay nhap n: ";
	do 
	{
		cin >> n ;
		if ( n<= 0 ) cout << "\nVui long nhap lai n: ";	
	}
	while ( n <= 0);
	long int s ; long int t = 0;
	for ( int i = 1; i <= n; i++)
	{
		s = pow(x,2*i);
		t = t + s ;
	}
	cout << "\nGia tri cua S(n) la: "<< t;
	system("pause");
}