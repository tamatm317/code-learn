// Tính tổng tất cả “ước số” của số nguyên dương n

#include <iostream>
#include <cmath>
using namespace std;

int Tinh_tong (int n);

int main ()
{
	int n;
	cout << "vHay nhap n: ";
	do 
	{
		cin >> n;
		if ( n<= 0)
		{
			cout << "\nVui long nhap lai n: ";
		}	
	}
	while (n <= 0 );
	cout << "\nTong tat ca uoc so cua so nguyen duong " << n << " la: " << Tinh_tong(n);
	system("pause");
	return 0;
}

int Tinh_tong ( int n )
{
	
	int s = 0;
	for ( int i =1; i<=n; i++)
	{
		if ( n%i == 0)
		{
			s = s+i;
		}
	}
	return s;
}