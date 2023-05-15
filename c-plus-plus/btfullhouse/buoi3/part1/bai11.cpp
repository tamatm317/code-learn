#include<iostream>
#include<cmath>
using namespace std;
// long long prime[1001];
// void sieve(){
// 	for(long long i = 0; i<1001; ++i) prime[i] = 1;
// 	prime[0] = prime[1] = 0;
// 	for(long long i = 2; i<=sqrt(100);++i){
// 		for(long long j = i*i; j<1001; j+=i){
// 			prime[j] = 0;
// 		}
// 	}
// }
int prime(long long n){
	for(long long i = 2; i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	// sieve();
	long long n;
	cin >> n;
	long long count = 0;
	for(long long j = 1; j<=sqrt(n); ++j){
		if(prime(j)) ++count;
	}
	cout << count << "\n";
}