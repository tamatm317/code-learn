// ý tường: sàn số nguyên tố

#include<iostream>
#include<cmath>
using namespace std;
int prime[1000001] ;
void sieve(){
	for(int i = 0; i<1000001; ++i) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2; i<=10000;++i){
		if(prime[i]){
			for(int j = i*i; j<1000001; j+=i){
				prime[j] = 0;
			}
		}
	}
}
// int prime(int n){
// 	for(int i = 2; i<=sqrt(n);++i){
// 		if(n%i==0) return 0;
// 	}
// 	return n>1;
// }
int main(){
	sieve();
	int test;
	cin >> test;
	for(int i= 1; i<=test;++i){
		long long a,b;
		int count = 0;
		cin >> a >> b;
		for(int j = ceil(sqrt(a)); j<=sqrt(b); ++j){
			if(prime[j]) ++count;
		}
		cout << count << endl;
	}
}