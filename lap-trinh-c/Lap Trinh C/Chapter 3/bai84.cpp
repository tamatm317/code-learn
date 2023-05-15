#include<iostream>
#include <cmath>

using namespace std;

float pt_bacnhat ( float a, float b, float &x);
int main(){
	float a,b,x;
	cout << "\nHay nhap a: " ; cin >> a;
	cout << "\nHay nhap b: "; cin >> b;
	if(pt_bacnhat(a,b,x) == 0){
		cout << "\nPhuong trinh co vo so nghiem.";
	}
	else if (pt_bacnhat(a,b,x) == 1){
		cout << "\nPhuong trinh vo nghiem.";
	}
	else{
		cout << "\nPhuong trinh co 1 nghiem duy nhat x = " << x;
	}
	system("pause");
	return 0;
}
float pt_bacnhat ( float a, float b, float &x)
{
	if ( a == 0){
		if ( b == 0 ){
			return 0;
		}
		else {
			return 1;
		}
	}
	x = -b / a;
	return 2;
}
