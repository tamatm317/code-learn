#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

float Tinh_tong ( int n);
int main ()
{
	int n;
	cout << "\nHay nhap n dau can : ";
	do
	{
		cin>> n;
		if ( n< 2 ){
			cout << "\nVui long nhap n > 2 : ";
		}
	} while ( n< 2);
	cout << "\nGia tri cua S(n) la: " << Tinh_tong(n);
	system ("pause");
	return 0;
}

float Tinh_tong(int n)
{
	float s=0;
	int i =2;
	while(i<=n)
	{
		s = pow(i+s,1.0/i);
		i++;
	}
	return s;
	/* 
      cho n = 3
      lan 1: pow(1+0, 1/1)
      lan 2: pow(2+pow(1,1),1/2)
	*/
}