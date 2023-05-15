#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x,n;
	cout << "\nHay nhap x: ";
	cin >> x;
	cout << "\nHay nhap n: ";
	do 
	{
		cin >> n ;
		if ( n<= 0 ) cout << "\nVui long nhap lai n: ";	
	}
	while(n<=0);
	float tong ;
	int ms =1 ;
	for (int i =1; i<=n; i++)
	{
         ms = ms*i;
         tong = tong + pow(x,i)/float(ms);
	}
	cout <<"\nGia tri cua S(n) khi n= "<< n << " la: "<< tong ;
	system("pause");
}	