#include <iostream>
#include <cmath>
using namespace std;

int Timn ();

int main()
{
	int s = 0;
	int i = 0;
	while (s+i<10000){
		s = s+i;
		i++;
	}
	cout << "\nGia tri nho nhat cua n de 1 + 2 + ... + n> 10000" << i ;
	system("pause");
	return i;
}

