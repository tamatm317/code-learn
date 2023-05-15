#include<iostream>
#include<iomanip>
using namespace std; //
#define ll long long
int main(){
	ll a,b;
	cin >> a >> b;
	ll tong = a+b, hieu = a-b, tich = a*b;
	double thuong = (double)a/b;
	cout << tong << " " << hieu << " " << tich << " " << fixed << setprecision(2) << thuong;
}