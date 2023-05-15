#include <iostream>
#include <cmath>

using namespace std;

float Tinh_tong ( int n);
int main ()
{
	int n;
	cout << "\nHay nhap n dau can: ";
	do{
		cin >> n;
		if (n<=0){
			cout << "\nVui long nhap n > 0 : ";
		}
	} while ( n<= 0);
	cout << "\nGia tri cua S(n) la: " << Tinh_tong(n);
	system("pause");
	return 0;
}
float Tinh_tong ( int n)
{
	float s =0;
	int i = 1;
	int gt = 1;
	while ( i<= n){
		gt = gt*i;
		s = pow(gt+s,1.0/(i+1));
		i++;
	}
	return s;
}