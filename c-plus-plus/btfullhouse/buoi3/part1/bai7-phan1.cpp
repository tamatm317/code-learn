#include<iostream>
using namespace std;
int prime[10000];
void sieve(){
	for(int i = 0; i<10000; ++i) prime[i] = 1;
	for(int i = 2; i<1000; ++i){
		for(int j = i*i; j<10000; j+=i){
			prime[j] = 0;
		}
	}
} 
int main(){
	int test;
	cin >> test;
	for(int i = 1; i<=test; ++i){
		int n;
		cin >> n;
		sieve();
		for(int j = 2; j<=n/2;++j){
			if(prime[j] && prime[n-j]){
				cout << j << " " << n-j << endl;
			}
		}
	}
}