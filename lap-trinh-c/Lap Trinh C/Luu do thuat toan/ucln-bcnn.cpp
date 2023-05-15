#include<iostream>
#include<cmath>
using namespace std;

int UCLN (int , int );
int BCNN (int , int );

int main()
{
	int a,b;
	cout << "\nHay nhap a: "; cin >> a;
	cout << "\nHay nhap b: "; cin >> b;
	cout << "\nUoc chung lon nhat cua a va b: "<< UCLN(a,b);
	cout << "\nBoi chung nho nhat cua a va b: " << BCNN(a,b);
	system("pause");
}	

int UCLN ( int a, int b)
{
	if (a<b)
	{
		for ( int i = a ; i>=1; i--)
		{
			if ( a%i == 0 && b % i == 0)
			{
				return i;
			}
		}
	}
	else // a>=b
	{
		for( int i = b; i >=1; i--)
		{
			if( b%i == 0 && a%i == 0)
			{
				return i;
			}
		}
	}	
}

int BCNN ( int a, int b)
{
	return (a*b) / UCLN(a,b);
}
