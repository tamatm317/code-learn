#include<iostream>
#include <math.h>

using namespace std;

float Tinh_tong (int n);
int main ()
{
	int n;
	cout << "\nHay nhap n dau can: ";
	do
	{
		cin >> n;
		if (n<=0 )
		{
			cout << "\nVui long nhap lai n: ";
		}
	}
	while ( n<= 0);
	cout << "\nGia tri cua S(n) la: " << Tinh_tong(n);
	system("pause");
	return 0;
}

float Tinh_tong (int n)
{
	float s =0;
	int i=1;
	while ( i<=n)
	{
		s = sqrt(i + s);
		i++;
	}
	
	return s;
}