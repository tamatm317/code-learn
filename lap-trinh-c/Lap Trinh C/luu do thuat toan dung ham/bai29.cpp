#include <iostream>

using namespace std;

int us_lelon(int &n);
int main ()
{
	int n;
	cout<< "\nHay nhap n: ";
	
	cout<< "\nUoc so le lon nhap cua n la: " << us_lelon(n);
	system("pause");
	return 0;
}

int us_lelon(int &n)
{
	do
	{
		cin >> n;
		if ( n<= 0) cout << "\nVui long nhap lai n: ";
	}
	while (n<=0 );
	int ss;
	for (int i =1; i<=n ; i++)
	{
		if ( n%i == 0)
		{
			if (i%2 == 1)
			{
				ss = i;
				if (i> ss)
				{
					ss=i;
				}
			}
		    	
		}
		
	}
	return ss;
}
