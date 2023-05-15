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
	while ( n<= 0);
	double s = 1;
	for (int i =1; i<=n; i++)
	{
		s = s*i;
	}
	cout << "\nGia tri cua T(n) la; "<< s;
}	system("pause");