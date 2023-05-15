#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
int prime(ll n){
	for(ll i = 2; i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}
int perfect(ll n){
	int sum = 0;
	for(ll i = 2; i<32;++i){
		if(prime(i)){
			int temp = (int)pow(2,i)-1;
			if(prime(temp)){
				sum = 1ll*temp*(pow(2,i-1));
				if(sum==n) return 1;
			}
		}
	}
	return 0;
}
int main(){
	int test_case;
	cin >> test_case;
	for(int i = 1; i<=test_case;++i){
		ll x; cin >> x;
		if(perfect(x))cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}