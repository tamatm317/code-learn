#include<iostream>
#include<cmath>
using namespace std;
int check(int n){
	for(int i = 2;i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}
void listprime(int n){
	for(int i = 2; i<=n; ++i){
		if(check(i)) cout << i << " ";
	}
}
int main(){
	int n;
	cin >> n;
	listprime(n);
	return 0;
}