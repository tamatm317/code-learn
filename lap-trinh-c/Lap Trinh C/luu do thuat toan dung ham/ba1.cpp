#include<iostream>
#include<cmath>

using namespace std;

int Tong_S ( int &n);

int main ()
{
int n ;
    cout << "\nHay nhap n: ";
    

    cout << "\nGia tri cua S(n) la: " << Tong_S(n) ;
    system("pause");
    return 0;
}

int Tong_S ( int &n)
{
	do
	{   
		
        cin >> n; 
		if ( n<= 0)
		{
			cout << "\nVui long nhap lai n: ";
		}
	}
	while ( n<= 0);

	int S = 0;
	for ( int i =1; i<= n; i++)
	{
		S = S +i;
	}
	return S;
}