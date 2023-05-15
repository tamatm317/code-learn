//Tính tích tất cả “ước số lẻ” của số nguyên dương n.
#include <iostream>
#include <cmath>

using namespace std;

int Tinh_tich(int &n);
int main()
{
	int n;
	cout << "\nHay nhap n: ";
	cout << "\nTich tat ca 'uoc so le' cua so nguyen duong n la: " << Tinh_tich(n);
	system("pause");
	return 0;
}

int Tinh_tich(int &n)
{
do
	{
		cin >> n;
		if ( n<= 0) cout << "\nVui long nhap lai n: ";
	}
	while( n<= 0);
	int s = 1;
	for (int i = 1; i<=n; i++)
	{
		if ( n%i == 0 )
		{
			if (i%2 == 1)
			{
				s = s*i;
			}
		}
	} 
	return s;
}