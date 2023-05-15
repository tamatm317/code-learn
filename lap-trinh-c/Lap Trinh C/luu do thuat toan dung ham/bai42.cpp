#include <iostream>
#include <cmath>

using namespace std;

int Tim_k ( int n);
int main()
{
	int n;
	cout << "\nHay nhap n: ";
	do{
		cin >> n;
		if ( n<=0){
			cout << "\nVui long nhap n>0 : ";
		}
	}while ( n<= 0);
	cout << "\nGia tri nguyen duong lon nhat cua k la: " << Tim_k(n);
}

int Tim_k (int n)
{
	int s = 0;
	int i = 0 ;
	while ( s+i < n)
	{
		i ++;
		s = s+i;
	}
	
return i;
}