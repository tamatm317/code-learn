#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long double x,n ;
	cout << "Hay nhap x: "; cin >> x ;
	cout << "Hay nhap n: "; cin >> n;
	long double t;
	t = pow(x,n);
	cout << "Gia tri cua T(x,n) la: " << t;
	system("pause");
}