// S=13+23+33+43+……+n3.
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void tonglapphuong(int n){
	long long sum = 0;
	for(int i = 1; i<=n; ++i){
		 sum+=pow(i,3);
	}
	cout <<  sum;
}
int main(){
	int n;
	cin >> n;
	tonglapphuong(n);
}