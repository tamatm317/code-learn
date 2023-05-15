#include <iostream>
#include <cmath>

using namespace std;
//Đếm số lượng “ước số chẵn” của số nguyên dương n.//


int Dem_chan (int &n);
int main ()
{
	int n;
	cout << "\nHay nhap n: ";
	
	cout << "\nSo luong 'uoc so chan' cua so nguyen duong n la: " << Dem_chan(n);
	system("pause");
	return 0;
}
int Dem_chan(int &n)
{
	do 
	{
		cin >> n;
		if ( n<= 0) 
		{
			cout  << "\nVui long nhap lai n: ";
		}
	}
	while ( n<= 0);
	int dem = 0;
	for (int i =1; i<=n; i++)
	{
		if ( n%i == 0)
		{
			if ( i%2 == 0)
			{
				dem = dem + 1;
			}
		}
	}
	return dem;
}


