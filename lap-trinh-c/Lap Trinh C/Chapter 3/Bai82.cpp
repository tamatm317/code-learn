#include <iostream>
#include <cmath>

using namespace std;

float Sosanh (float a, float b, float c);
int main ()
{
	float a,b,c;
	cout << "\nHay nhap so thuc a: "; cin >> a;
	cout << "\nHay nhap so thuc b: "; cin >> b;
	cout << "\nHay nhap so thuc c: "; cin >> c;
	cout << "\nSo lon nhat trong 3 so thuc la: " << Sosanh(a,b,c);
	system("pause");
	return 0;
}
float Sosanh( float a,float b,float c)
{
	if (a>b && a>c ){
		return a;
	}
	else if ( b>c && b>a){
		return b;
	}
	else if ( c>b && c>a){
		return c;
	}
	else if ( a==b || b == c){
		return b;
	}
	else if (b==c || c==a){
		return c;
	}
	else if(c==a || b==a){
		return a;
	}
}