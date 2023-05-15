#include<iostream>
#include<cmath>
// #define int long long
using namespace std;
int check(int n){
	int max = n%10;
	int res = n/10;
	while(res>0){
		int temp = res%10;
		if(temp>max) return 0;
		res/=10;
	}
	return 1;
}
int prime(int n){
	for(int i = 2; i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}
void sieve(int n){
	int count = 0;
	for(int i = 2; i<n; ++i){
		if(prime(i)){
			if(check(i))++count;
		}
	}
	cout << count << endl;
	for(int i = 2; i<n; ++i){
		if(prime(i)){
			if(check(i))cout << i << " ";
		}
	}
}
int main(){
	int n;
	cin >> n;
	sieve(n);
}