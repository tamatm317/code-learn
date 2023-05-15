#include <iostream>
#include <cmath>

using namespace std;

//Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó.//


int Tong_s(int &n);
int main ()
{
	int n;
	cout << "\nHay nhap n: ";
	
	cout << "\nTong cac uoc so nho hon chinh no la: " << Tong_s(n);
	system("pause");
	return 0;
}

int Tong_s (int &n)
{
	do
	{
		cin >> n;
		if ( n<= 0)
		{
			cout << "\nVui long nhap lai n: ";
		}
	}
	while (n <= 0);
	int s=0;
	for (int i =1; i<n ; i++)
	{
		if ( n%i == 0)
		{
			s= s+i;
		}
	}
	return s;
}

