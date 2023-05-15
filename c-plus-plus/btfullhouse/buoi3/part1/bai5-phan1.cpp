#include<iostream>
#include<cmath>
using namespace std;
int max(int a, int b){
	return a>b?a:b;
}
int all_element_prime(int n){
	int check = 1;
	int res = n;
	while(res>0){
		int temp = res%10;
		if(temp!=2 && temp!=3 && temp!=5 && temp!=7){
			check = 0;
			break;
		}
		res/=10;
	}
	return check;
}
void sieve(int l, int r){
	int prime[r-l+1];
	int count = 0;
	for(int i = 0; i<r-l+1; ++i){
		prime[i] = 1;
	}
	for(int i = 2; i<=sqrt(r);++i){
		for(int j = max(2,(l+i-1)/i*i); j<=r; j+=i){
			prime[j-l] = 0;
		}
	}
	for(int i = max(2,l); i<=r; ++i){
		if(prime[i-l] && all_element_prime(i))++count;
	}
	cout << count;
}
int main(){
	int tes_case;
	cin >>tes_case;
	for(int i = 1; i<=tes_case; ++i){
		int l,r;
		cin >> l >> r;
		sieve(l,r);
		cout << endl;
	}
}