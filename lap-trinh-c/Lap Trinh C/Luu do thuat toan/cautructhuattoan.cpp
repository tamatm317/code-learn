#include<iostream>
#include<cmath>
using namespace std;

int Tinh_tong ( int a, int b)
{
	return ( a + b );
}

int main()
{
	int e=5;
	int f=6;
	
	int ketqua = Tinh_tong(e,f) ;
	cout << "\nKet qua la: "<< ketqua;
	system("pause");
}