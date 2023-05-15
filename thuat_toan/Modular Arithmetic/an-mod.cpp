#include<iostream>
#include<cmath>
using namespace std;
#define ll long long 
int main(){
	int n;
	long long MOD = 1000000007;
	cin >> n ;
	long long a[n];
	for(int i = 0; i<n;++i){
		cin >> a[i];
	} 
	long long res = 1;
	for(int i = 0;i<n;++i){
		res *= a[i];
		res%MOD;
	}
	cout << res%MOD ;
}