#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "\nHay nhap n: ";
	do 
	{
		cin >> n ;
		if ( n<= 0 ) cout << "\nVui long nhap lai n: ";	
	}
   while( n<=0 );
   float s = 0;
   for (int i=0; i<= n ; i++)
   {
   	s = s + (2*float(i)+1)/(2*i+2);
   }
   cout << "\nGia tri cua S(n) la: "<< s;
   system("pause");
}