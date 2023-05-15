#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int n ;cout << "\nHay nhap n: ";
   do
   	{
   		cin >> n;
   		if ( n<= 0 ) cout << "\nVui long nhap lai n: ";
   	} while ( n <= 0);
  float tong = 0;
  for ( int i = 1; i<= n ; i++)
  {
  	tong = tong + 1/(float(i)*(i+1));
  }	
  cout << "\nGia tri cua S(n) la: "	<< tong;
  system("pause");
}