#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	float e=1;
	int dem=1;
	int gt=1;
	while( e < 2*0.000001)
	{
		gt = gt*dem ;
		e = e+1.0/gt;
		dem ++;
	}
	cout << "\nGia tri cua e(n) la: "<< e ;
	system("pause");
	return 0;
}