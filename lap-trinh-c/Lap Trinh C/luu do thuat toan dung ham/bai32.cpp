#include <iostream>
#include <math.h>

using namespace std;

bool Kiem_tra ( int n);
int main ()
{
	int n;
	cout << "\nHay nhap n: ";
	do
	{
		cin >> n;
		if ( n<=0 ) cout << "\nVui long nhap lai n: ";
	}
	while (n<= 0);
	
    if (Kiem_tra(n) == true)
    {
    	cout << n<< " la so chinh phuong";
    }
    else 
    {
    	cout << n << " khong phai la so chinh phuong. ";
    }
    system("pause");
    return 0;
}

bool Kiem_tra ( int n)
{
	

    for ( int i = 1; i < n; i++)
    {
    	if ( i*i == n)
    	{
    		return true;
    	}
    }
    return false;
}
