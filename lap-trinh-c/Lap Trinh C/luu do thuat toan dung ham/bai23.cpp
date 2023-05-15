// Đếm số lượng “ước số” của số nguyên dương n //

#include <iostream>
#include <cmath>

using namespace std;

int dem ( int n );
int main ()
{
	int n;
	cout << "\nHay nhap n: ";
	cout << "\nSo luong uoc so cua so nguyen duong la: " << dem(n);
	system("pause");
	return 0;
}

int dem ( int a)
{
	do 
	{
		cin >> a;
		if ( a<= 0)
		{
			cout << "\nVui long nhap lai n: ";
		}
	}
	while ( a<= 0);
	int dem = 0;
	for ( int i =1; i<=a; i++)
	{
		if ( a%i == 0 )
		{
			dem = dem + 1;
		}
	}
	return dem;
}