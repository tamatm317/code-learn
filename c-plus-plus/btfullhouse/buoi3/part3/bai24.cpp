#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
ll count_prime(ll n){
	long long res = n;
	for(int i=2; i<=sqrt(n);++i){
		if(n%i==0){
			while(n%i==0)n/=i;
			res-= res/i;
		}
	}
	if(n!=1) res -= res/n;
	return res;
}
int main(){
	ll n;
	cin >> n;
	cout << count_prime(n);
}