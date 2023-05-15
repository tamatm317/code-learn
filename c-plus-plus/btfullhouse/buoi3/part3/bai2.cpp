#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
int main(){
	int testcase;
	cin >> testcase;
	for(int i = 1; i<=testcase;++i){
		ll n;
		cin >> n;
		ll x = sqrt(n);
		if(x*x==n) cout << "YES\n";
		else cout << "NO\n";

	}
}