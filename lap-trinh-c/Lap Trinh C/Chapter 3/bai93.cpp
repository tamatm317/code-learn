//Kiem tra so nguyen to
#include <iostream>
#include <cmath>

using namespace std;

bool Kiem_tra_so_nguye_to (int n);
int main (){
	int n;
	cout << "\nHay nhap n: ";
	do {
		cin >> n;
		if (n<=0){
			cout << "\nVui long nhap n > 0: ";
		}
	} while (n<=0);
	if (Kiem_tra_so_nguye_to(n) == true ){
		cout << n << " la so nguyen to. ";
	}
	else {
		cout << n<< " khong phai la so nguyen to.";
	}
}
bool Kiem_tra_so_nguye_to ( int n)
{
	if ( n<2 ){
		return false;
	}
	else
	{
		if ( n == 2 )
		{
			return true;
		}
		else
		{
			if ( n % 2 == 0){
				return false;
			}
			else
			{
				for ( int i =2; i <n; i ++)
				{
					if ( n % i == 0 )
					{
						return false;
					}
				}
			}
		}
	}
    return true;
}