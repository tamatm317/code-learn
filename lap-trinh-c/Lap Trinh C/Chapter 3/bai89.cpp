#include <iostream>
#include <cmath>
using namespace std;
int Tinh_tong (int n);
int main ()
{
	int n;
	cout << "\nHay nhap n: ";
	do {
		cin >> n;
		if (n<=0 ){
			cout << "\nVui long nhap n > 0: ";
		}
	} while ( n <= 0);
	cout << "\nTong cac gia tri le nguyen duong nho hon n: "<< Tinh_tong(n);
	system("pause");
	return 0;
}
int Tinh_tong ( int n )
{
	int s = 0;
	for ( int i = 0; i < n; i++)
	{
		{}
		s = s+i;
	}
	return s;
}