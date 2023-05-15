#include<iostream>
#include<cmath>

using namespace std; 

float Mu_thua ( int &a, int &x);

int main ()
{
int n,x ;
cout << "\nVui long nhap x: ";
cin >> x;
cout << "\nVui long nhap n: ";
cin >> n;

cout << "\nGia tri cua S(n) la: " << Mu_thua(x,n) ;
system("pause");
return 0;
}

float Mu_thua ( int &x, int &a)
{ 
	float t ;
	t = pow(x,a);
	return t;
}	