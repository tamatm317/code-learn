//Kiemtra so nguyen to
#include <iostream>

using namespace std;

bool Kiemtra(int &n);
int main ()
{
	int n;
	cout << "\nHay nhap n: ";
	do
	{
		cin >>n;
		if (n<=0) cout <<"\nVui long nhap lai n: ";
	}
	while (n<=0);
	if (Kiemtra(n)==true)
	{
		cout << n << " la so nguyen to";
	}
	else
	{
		cout << n << " khong phai la so nguyen to.";
	}
	system("pause");
	return 0;
}

bool Kiemtra(int &n)
{
	if ( n <2)
	{
		return false;
	}
	else // n>=2
	{
		if (n == 2)
		{
			return true;
		}
		else //n>2
		{
			if ( n%2 == 0)
			{
				return false;
			}
			else
			{
				for (int i =2; i<n; i++)
				{
					if ( n%i == 0)
					{
						return false;
					}
				}
			}
		}

	}
return true;
}