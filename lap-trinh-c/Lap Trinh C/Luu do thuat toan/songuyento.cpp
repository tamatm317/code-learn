#include<iostream>
#include<cmath>
using namespace std;

bool Kiem_tra_so_nguyen_to (int n )
{
	if (n<2)
	{
		return false;
	}
	else // n >=2
	{
		if ( n == 2)
		{
			return true;
		}
		else // n =!2
		{
			if ( n%2 == 0)
			{
				return false;
			}
			else // n %2 khac 0
			{
				for(int i = 2; i<n; i++)
				{
					if (n%i == 0)
					{
						return false;
					}
				}
			}
		}	
	}
	return true;
}

int main()
{
	int n;
	cout << "\nHay nhap so nguyen n: ";
	cin >> n ;
    bool Kt = Kiem_tra_so_nguyen_to(n);
    if (Kt == false)
    {
    	cout << n << " khong phai la so nguyen to.";
 
    }
    else 
    {
    	cout << n << " la so nguyen to.";
    }
    system("pause");
}