//Liệt kê tất cả “ước số lẻ” của số nguyên dương n.//
#include <iostream>
#include <cmath>

using namespace std;

int Liet_ke_le ( int &n);
int main ()
{
	int n;
	cout << "\nhay nhap n: ";
	do
	{
		cin >> n;
		if ( n <= 0)
		{
			cout << "\nVui long nhap lai n: ";
		}
	}
	while ( n<= 0 );
	cout << "\nTat ca uoc so le cua so nguyen duong la : " ;
	for (int i = 1; i < n; i++)
	{
		if (n%i == 0)
		{
			if ( i%2 == 1)
			{
				cout << i << " ";
			}
		} 
	}
	
	
	system("pause");
    return 0;
}


