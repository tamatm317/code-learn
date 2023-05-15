#include <iostream>
#include <math.h>

using namespace std;

float Kiem_tra(int n);
int main ()
{
	int n;
	cout << "\nHay nhap n dau can: ";
	do
	{
		cin >> n;
		if (n<=0) 
		{
			cout << "\nVui long nhap lai n: ";
		}
	}
	while ( n<= 0);
	
	cout << "\nGia tri cua S(n) la :" << Kiem_tra(n);
	system("pause");
	return 0;
}

float Kiem_tra(int n)
{
	
	float s = 0;
    int i =1;
    while ( i<=n )
    {
    	s =sqrt( 2 + s);
    	i++;
    }
    /* vòng lặp i i chạy từ 1 đến n:
    Vòng lặp thứ nhất: 
    s = sqrt(2+s) // với s ban đầu là 0
    vòng lặp thứ 2:
    s = sqrt(2+s) // với s lần thứ 2 là sqrt(2)
    Lần thứ 3:
    s = sqrt(2+s) // với s lần thứ 3 là sqrt(2+sqrt(2)) */
    return s;  
}