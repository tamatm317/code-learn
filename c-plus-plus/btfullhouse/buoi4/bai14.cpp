#include<iostream>
#include<iomanip>
using namespace std;
float sum(int n){
	if(n==1) return 1;
	return (float)1/n + sum(n-1);
}
int main(){
	int n;
	cin >> n;
	cout << fixed << setprecision(2) << sum(n);
}