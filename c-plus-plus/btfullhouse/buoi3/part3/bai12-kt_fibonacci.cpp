#include<iostream>
using namespace std;
#define ll long long
int fibonacci(ll n){
	if(n==0||n==1) return 1;
	ll f0 = 0, f1 = 1;
	for(int i=3; i<=94; ++i){
		ll fi = f0 +f1;
		if(n==fi){
			return 1;
		}
		f0 = f1;
		f1 = fi;
	}
	return 0;
}
int main(){
	int test_case; cin >> test_case;
	for(int i = 1; i<=test_case;++i){
		ll n;
		cin >> n;
		if(fibonacci(n))cout << "YES\n";
		else cout << "NO\n";
	}
}