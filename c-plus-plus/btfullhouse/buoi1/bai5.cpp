#include<iostream>
#include<cmath>
#include<iomanip>
#define PI 3.14
using namespace std;
int main(){
	int r;
	cin >> r;
	double chuvi = (double)r*2*PI, dientich = pow(r,2)*PI;
	cout << fixed << setprecision(2) << chuvi << " " << dientich;
}