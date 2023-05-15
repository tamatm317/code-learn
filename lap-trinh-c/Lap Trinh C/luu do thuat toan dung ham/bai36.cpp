#include <iostream>
#include <math.h>

using namespace std;

float Tinh_tong ( int n);
int main ()
{
    int n; 
    cout << "\nHay nhap n: ";
    do {
    	cin >> n;
    	if ( n<= 0){
    		cout << "\nVui long nhap lai n: ";
    	}
    }while ( n<=0 );
    cout << "\nGia tri cua S(n) la: " << Tinh_tong(n);
    system("pause");
    return 0;
}

float Tinh_tong(int n)
{
	float s = 0;
	int i =1; 
	int gt = 1;
	while ( i<=n)
	{
		gt = gt*i;
		s= sqrt( gt + s);
		i++;
	}
	return s;

	/*  
             cho n = 3
             1. 1*1=gt,    s=sqrt(1*1)
             2. 1*2=gt     s=sqrt(2+sqrt(1))
             3 . 2*3 = gt  s = sqrt(6 + sqrt(2+sqrt(1)))
	*/
}