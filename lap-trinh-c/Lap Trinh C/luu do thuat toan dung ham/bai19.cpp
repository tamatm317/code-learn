#include<iostream>
#include<cmath>

using namespace std;
float  Tong_S ( int &x, int &n);
int main ()
{
int n,x ;
cout << "\nVui long nhap x: "; cin >> x;
cout << "\nVui long nhap n: "; 
cout << "\nGia tri cua S(n) la: " << Tong_S(x,n) ;
system("pause");
return 0;
}

float Tong_S ( int &x, int &n)
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
	float s = 1 +x ;
	int ms = 1 ;
	for (int i = 3; i<= 2*n+1 ;  i=i+2)
	{
		ms = ms*(i-1)*i ;
		s = s + pow(x,i)/float(ms);
	}
	return s;
}