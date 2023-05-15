#include<iostream>
#include<cmath>
using namespace std;
// int prime[100000000];
int prime(int n){
	for(int i = 2; i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}
int elements_prime(int n){
	int sum = 0;
	while(n>0){
		int r = n%10;
		sum+=r;
		if(r!=2 and r!=3 and r!=5 and r!=7) return 0;
		n/=10;
	}
	return prime(sum);
}
// int max(int a, int b){
// 	return a>b?a:b;
// }
// void sieve(int l, int r){
// 	int prime[r-l+1];
// 	for(int i = 0; i<r-l+1; ++i){
// 		prime[i] = 1;
// 	}
// 	for(int i = 2; i<=sqrt(r);++i){
// 		for(int j =max(i*i,(l+i-1)/i*i); j<=r; j+=i){
// 			prime[j-l] = 0;
// 		}
// 	}
// 	int count = 0;
// 	for(int i = max(2,l); i<=r; ++i)
// 	{
// 		if(prime[i-l]){
// 			if(elements_prime(i))++count;
// 		}
// 	}
// 	cout << count;
// }
int main(){
	// sive()
	int a,b;
	cin >> a >> b;
	int count = 0;
	for(int i= a; i<=b;++i){
		if(elements_prime(i)&&prime(i))++count;// để element prime lên trước giảm tgian so sánh
	}
	cout << count;
}