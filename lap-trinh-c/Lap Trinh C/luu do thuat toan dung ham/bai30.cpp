#include <iostream>
#include <cmath>

using namespace std;

bool Kiemtra (int n);
int main()
{    
	int n;
	cout << "\nHay nhap n: ";
	
	do
	{
		cin >>n;
		if( n<= 0) cout << "\nVui long nhap lai n: ";
	}
	while (n<= 0);
	
	if (Kiemtra(n) == true)
	{
		cout << n << " la so hoan hao.";
		cin >> n;
	}
	else 
	{
		cout << n<< " khong phai la so hoan hao.";
	}
	system("pause");
	return 0;
}

bool Kiemtra(int n )
{
	
	int s=0;
	for (int i =1; i<n; i++)
	{
		if (n%i == 0)
		{
			s =s +i;
		}
	}
    if ( s==n) 
	{
		return true;
	}
	else
	{
		return false;
	}
}



