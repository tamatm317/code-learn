// Liệt kê tất cả “ước số” của số nguyên dương n.

#include <iostream>
#include <cmath>

using namespace std;

int Liet_ke (int n);

int main ()
{
	int n;
	cout << "\nVui long nhap n: "  ; 
	do
	{
		cin >> n;
		if ( n <= 0)
		{
			cout << "\nVui long nhap lai n: ";
		}	
	}
	while ( n <= 0);
	cout << "\nCac 'uoc so' cua so nguyen duong n la: ";
	cout << Liet_ke(n) ;
	system("pause");
	return 0;
}

int Liet_ke (int n )
{
	
	
	for ( int i = 1; i<n; i++)
	{
		if ( n%i == 0 )
		{
			cout << i << " " ;
		}
	}
} 


