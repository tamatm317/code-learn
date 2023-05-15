#include<iostream>
#include<cmath>
using namespace std;
int prime[100001];
void sieve(){
	for(int i = 2; i<100001;++i){
		prime[i] = i;
	}
	for(int i = 2; i<=sqrt(100000);++i){
		for(int j = i*i; j<100001;j+=i){
			if(prime[j] == j)
				prime[j] = i;
		}
	}
}
void phan_tich(int n){
	while(n!=1){
		int tmp = prime[n];
		int cnt = 0;
		while(n%tmp==0){
			++cnt;
			n/=tmp;
		}
		cout<< tmp << "("<<cnt<<")"<< " ";
	}
}
int main(){
	sieve();
	int test_case;
	cin >> test_case;
	for(int i = 1; i<=test_case;++i){
		int n;
		cin >> n;
		cout << "#TC"<<i<<": ";
		phan_tich(n);
		cout << endl;	
	}
}