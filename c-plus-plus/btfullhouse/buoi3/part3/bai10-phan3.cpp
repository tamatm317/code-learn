#include<iostream>
#include<cmath>
using namespace std;
int up(int n){
	while(n>=10){
		int temp = n%10;
		if(temp <= (n/10)%10){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int down(int n){
	while(n>=10){
		int temp = n%10;
		if(temp>=(n/10)%10){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int prime(int n){
	for(int i = 2; i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}
// void sieve(int n){
// 	int prime[n];
// 	for(int i = 2; i<n; ++i) prime[i] =1;
// 	for(int i = 2; i<=sqrt(n);++i){
// 		for(int j = max(i*i,(2+i-1)/i*i); j<=n; j+=i){
// 			prime[j-2] = 0;
// 		}
// 	}
// 	for(int i = 2; i<=n; ++i){
// 		if(prime[i-2] && (up(i)||down(i))) cout << i << " ";
// 	}
// }
int main(){
	int n;
	cin >> n;
	int count = 0;
	for(int i = pow(10,n-1); i<pow(10,n) ; ++i){
		if(prime(i)){
			if(up(i)||down(i)) 
				// cout << i << " ";
				++count;
		}
	}
	cout << count;
}