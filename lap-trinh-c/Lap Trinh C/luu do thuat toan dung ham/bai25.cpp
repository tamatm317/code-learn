#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

//Tính tổng tất cả “ước số chẵn” của số nguyên dương n

int Tinh_tong (int &n);
int main ()
{
	int n;
	cout << "\nHay nhap n: ";
	
	cout << "\nTong tat ca 'uoc so chan' cua so nguyen duong n la: " << Tinh_tong(n);
	system("pause");
	return 0;

	
}

int Tinh_tong(int &n)
{
	do
	{
		cin >> n;
		if ( n<= 0) cout << "\nVui long nhap lai n: ";
	}
	while( n<= 0);
	int s =0 ;
	for (int i = 1; i<=n; i++)
	{
		if ( n%i == 0 )
		{
			if (i%2 == 0)
			{
				s = s + i;
			}
		}
	} 
	return s;
}
