#include<iostream>
#include<cmath>
using namespace std;
int max(int a, int b){
	return a>b?a:b;
}
int fibo(int n){
	if(n==1) return 1;
	if(n==0) return 1;
	int f0 = 0, f1 = 1;
	for(int i = 3; i<=20; ++i){
		int fi = f0+f1;
		f0 = f1;
		f1 = fi;
		if(fi == n) return 1;
	}
	return 0;
}
int tong_fibo(int n){
	int res = n, sum = 0;
	while(res>0){
		int temp = res%10;
		sum += temp;
		res/=10;
	}
	if(fibo(sum)) return 1;
	else return 0;
}

void sieve(int l, int r){
	int prime[r-l+1];
	for(int i = 0; i<r-l+1;++i) prime[i] = 1;
	for(int i = 2;i<=sqrt(r);++i){
		for(int j = max(i*i,(l+i-1)/i*i);j<=r; j+=i){
			prime[j-l] = 0;
		}
	}
	int count = 0;
	for(int i = max(l,2); i<=r; ++i){
		if(prime[i-l]){
			if(tong_fibo(i)){
				cout << i << " ";
				++count;
			}
		}
	}
	if(count == 0) cout << -1; 
}
int main(){
	int a,b;
	cin >> a >> b;
	sieve(a,b);
}