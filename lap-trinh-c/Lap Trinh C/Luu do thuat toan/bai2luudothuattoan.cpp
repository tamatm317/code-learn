#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
	int n ;
	cout << "\nHay nhap gia tri n: " ;
	do 
	{
		
		cin >> n;
		if ( n<= 0)
		{
			cout << "\nVui long nhap lai n: " ;
		}
	}
	while (n <= 0 );
    
    int tong = 0;
	for (int i = 1; i<= n; i= i + 1)
	{
		tong = tong + pow(i,2) ;
	}
	cout << "Gia tri cua S(n) la: " << tong ;
	system("pause");
	return 0;
}
