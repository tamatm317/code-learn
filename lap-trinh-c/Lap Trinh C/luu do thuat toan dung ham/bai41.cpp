#include <iostream>
#include <cmath>

using namespace std;

float Tinh_tong ( int n);
int main ()
{
	int n;
	cout << "\nHay nhap n dau phan so: ";
	do{
		cin >> n;
		if ( n<= 0) {
			cout << "\nVui long nhap lai n: ";
		}
	} while ( n<= 0);
	cout << "\nGia tri cua S(n) la : " << Tinh_tong(n);
	system("pause");
	return 0;
}

float Tinh_tong (int n)
{
	float s =1;
	for ( int i =1; i<=n; i++)
	{
		s=1+1.0/s;
	}
	float kq;
	kq = 1/s;
	return kq;
}