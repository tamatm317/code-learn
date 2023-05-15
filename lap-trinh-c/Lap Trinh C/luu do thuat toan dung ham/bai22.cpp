//Tính tích tất cả “ước số” của số nguyên dương n.

#include <iostream>
#include <cmath>
using namespace std;

int Tinh_tich (int n);

int main ()
{
	int n;
	cout << "\nHay nhap n: ";
	do
	{
		cin >> n;
		if ( n<= 0)
		{
			cout << "\nVUi long nhap lai n: ";
		}
	}
	while ( n<= 0);
	
	cout << "\nTich tat ca uoc so cua so nguyen duong "<< n << " la: "<< Tinh_tich(n);
	system("pause");
	return 0;
}

int Tinh_tich(int n)
{
	
	int s =1;
	for ( int i =1; i<=n ; i++)
	{
		if ( n%i == 0)
		{
			s = s*i;
		}
	}
	return s;
}