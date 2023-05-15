#include<iostream>
#include<cmath>

using namespace std; 

double Giai_thua ( int &a);

int main ()
{
int n ;
cout << "\nVui long nhap n: ";
cout << "\nGiai thua cua "<< n << " la: " << Giai_thua(n) ;
system("pause");
return 0;
}
double Giai_thua ( int &a)
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
	double s=1;
	for ( double i = 1 ; i<= a; i++)
	{
		s= s*i;
	}
	return s;
}	