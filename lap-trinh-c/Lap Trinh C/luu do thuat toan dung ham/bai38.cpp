#include <iostream>
#include <cmath>

using namespace std;

float Tinh_tong (int n);
int main ()
{
	int n;
	cout << "\nHay nhap n dau can: ";
	do{
		cin >> n;
		if (n <=0){
			cout <<"\nVui lonng nhap n > 0 : ";
		}
	}while ( n<=0);
	cout << "\nGia tri cua S(n) la: " << Tinh_tong(n);
	system ("pause");
	return 0;
}

float Tinh_tong (int n)
{
	float s =0;
	int i =1;
	while(i<=n){
		s = pow(i+s, 1.0/(i+1));
		i++;
	}
	return s;
}