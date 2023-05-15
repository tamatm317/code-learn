#include<iostream>
#include<cmath>
using namespace std;
void tong(int n){
	long long sum = 0;
	for(int i = 1; i<=n; ++i){
		sum+=pow(i,2);
	}
	cout << sum;
}
int main(){
	int n;
	cin >> n;
	tong(n);
}