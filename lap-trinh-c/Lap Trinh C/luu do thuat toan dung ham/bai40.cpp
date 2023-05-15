#include <iostream>
#include <math.h>

using namespace std;

float Tinh_tong (int n);
int main ()
{
	int n;
	cout << "\nHay nhap n dau phan so : ";
	do {
		cin >> n;
		if ( n<=0 ) cout << "\nVui long nhap lai n: ";
	}
	while ( n<= 0);
	cout << "\nGia tri cua S(n) la: " << Tinh_tong(n);
	system("pause");
	return 0;
}

float Tinh_tong ( int n)
{
	float kq;
	float s =1;
	for ( int i =1; i<=n; i++)
	{
		s = 1 + 1/s;
	}
	kq= 1/s;
	return kq;
}