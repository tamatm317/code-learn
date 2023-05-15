#include <iostream>
#include <cmath>
using namespace std;
int Tim_m (int n);
int main()
{
	int n;
	cout << "\nHay nhap n: ";
	do{
		cin >> n;
		if ( n<= 0 ){
			cout << "\nVui long nhap n > 0: ";
		}
	} while ( n<= 0);
	cout << "\nSo nguyen duong m lon nhat de 1 + 2 + 3 + ... + m < " << n << " la: " << Tim_m(n);
}

int Tim_m (int n)
{
	int s = 0;
	int i = 1;
	while (s + i < n){
		s = s+ i;
		i++ ;
	}
	return --i;
	
}