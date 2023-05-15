#include <iostream>
#include <cmath>

using namespace std;
int Tinh_tong (int n);
int main ()
{
    long  n;
	cout << "\nHay nhap n: ";
	do{
		cin >> n;
		if( n<=0 ){
			cout << "\nVUi long nhap n>0 : ";
		}
	} while (n <=0);
	cout << "\nSo luong chu so cua so nguyen duong " << n << " la: "<< Tinh_tong(n);
	system ("pause");
	return 0;
}

int Tinh_tong (int n)
{
	int s = 0;
    int i = 1;
    int a;
	while (i < n)
	{
		a = n%10;
        s = s+a  ;
		n = n/10 ;
		i++ ;
	}
	return s;
}