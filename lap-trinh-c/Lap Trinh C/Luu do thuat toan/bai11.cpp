#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "\nHay nhap n: ";
	do 
	{
		cin >> n ;
		if ( n<= 0 ) cout << "\nVui long nhap lai n: ";	
	}
	while ( n <= 0);
	long int s = 1; long int t = 0;
	for (int i=1; i<=n; i++)
	{
		s = s*i;
		t= t + s;

	}
	cout << "\nGia tri cua S(n) la: "<< t ;
	system("pause");
}