#include <iostream>
#include <cmath>

using namespace std;
int Dem (int n);
int main ()
{
    long  n;
	cout << "\nHay nhap n: ";
	do{
		cin >> n;
		if( n<=0 ){
			cout << "\nVUi long nhap n>0 : ";
		}
	} while (n <=0);
	cout << "\nSo luong chu so cua so nguyen duong " << n << " la: "<< Dem(n);
	system ("pause");
	return 0;
}

int Dem ( int n)
{
	int i = 0; 
	int dem = 0;
	while ( i<n)
	{

	    
	    dem ++;
	    n = n/10;	
	}
	
	return dem;
}