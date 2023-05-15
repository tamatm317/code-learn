#include<iostream>
#include<cmath>

using namespace std;
float  Tong_S ( int &n); 
int main ()
{
int n ;
cout << "\nVui long nhap n: ";
cout << "\nGia tri cua S(n) la: " << Tong_S(n) ;
}

float Tong_S ( int &n)
{
	do 
	{
		cin >> n;
		if ( n<= 0)
		{
			cout << "\nVui long nhap lai n: ";
		}
	}
	while ( n<= 0);
	float s= 0;
	int ms = 0;
	for (int i = 1; i<=n ; i++)
	{
		ms = ms +i;
		s = s + 1/float(ms);
	}
	return s;
}