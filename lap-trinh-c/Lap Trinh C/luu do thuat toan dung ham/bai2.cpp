#include<iostream>
#include<cmath>

using namespace std; 

int Tong_S ( int &a);

int main ()
{
int n ;
cout << "\nVui long nhap n: ";
cout << "\nGia tri cua S(n) la: " << Tong_S(n) ;
system("pause");
return 0;
}


int Tong_S (int &a)
{
	do
	{
		cin >> a;
		if( a<= 0)
		{
			cout << "\nVui long nhap lai n: ";
		}
	}	
	while ( a<= 0);
	int S = 0;
	for ( int i = 1 ; i <= a; i++)
	{
		S = S + pow(i,2);
	}
	return S;
	
}