#include<iostream>
#include<cmath>

using namespace std;

int Tong_S ( int &x , int &a);

int main ()
{
int n,x ;
cout << "\nVui long nhap x: ";
cin >> x;
cout << "\nVui long nhap n: ";


cout << "\nGia tri cua S(n) la: " << Tong_S(x,n) ;
system("pause");
return 0;
}

int Tong_S ( int &x, int &a)
{
	do 
	{
		cin >> a;
		if ( a<= 0)
		{
			cout << "\nVui long nhap lai n: ";
		}
	}
	while ( a<= 0);
	int s=0;
	for ( int i = 1; i <= a; i ++)
	{
		s = s + pow(x,i);
	}
	return s;

}