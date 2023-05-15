#include<iostream>
#include<cmath>
using namespace std;
// int prime[1001];
// void sieve(){
// 	for(int i = 0; i<1001; ++i) prime[i] = 1;
// 	prime[0] = prime[1] = 0;
// 	for(int i = 2; i<=sqrt(100);++i){
// 		for(int j = i*i; j<1001; j+=i){
// 			prime[j] = 0;
// 		}
// 	}
// }
int prime(int n){
	for(int i = 2; i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	// sieve();
	int test_case;
	cin >> test_case;
	for(int i = 1; i<=test_case;++i){
		int n;
		cin >> n;
		for(int j = 1; j<=sqrt(n); ++j){
			if(prime(j)) cout << j*j << " ";
		}
		cout << "\n";
	}
}