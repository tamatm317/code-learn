// n!=1.2.3……n
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void giaithua(int n){
	long long total = 1;
	for(int i = 1; i<=n; ++i){
		 total*=i;
	}
	cout <<  total;
}
int main(){
	int n;
	cin >> n;
	giaithua(n);
}