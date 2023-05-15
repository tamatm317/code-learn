#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n ;cout << "\nHay nhap gia tri n: ";
	do 
	{
		cin >> n ;
		if (n<=0 ) cout << "\nVui long nhap lai n: ";
	}
	while ( n <= 0 );
	float tong = 0;
	for( int i = 0; i<=n; i++)
	{
		tong = tong + 1/(2*float(i)+1);
	}	
	cout << "\nGia tri cua S(n) la; "<<tong ;
	system("pause");
}