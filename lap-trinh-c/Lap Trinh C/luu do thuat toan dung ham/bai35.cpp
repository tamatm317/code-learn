#include <iostream>
#include <math.h>

using namespace std;

float Tinh_tong ( int n);
int main ()
{
	int n;
	cout << "\nHay nhap n dau can : ";
	do {
		cin >> n;
		if (n<= 0){
			cout << "\nVui long nhap lai n: ";
		}
	}
	while ( n<= 0);
	cout << "\nGia tri cua S(n) la: " << Tinh_tong(n);
	system("pause");
	return 0;
}

float Tinh_tong(int n)
{
	float s = 0;
	int i =n;
	while ( i>=1)
	{
		s = sqrt(i +s);
		i--;
	}
	return s;
	/*
              cho n=5
              1.sqrt(5)
              2.sqrt(4+sqrt5)
              3: sqrt(3+ sqrt(4+sqrt(5)))
              4: srt(2 + sqrt(3+ sqrt(4+sqrt(5))))
              5: sqrt(1 + srt(2 + sqrt(3+ sqrt(4+sqrt(5)))))
	*/
}