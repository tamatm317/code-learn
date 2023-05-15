#include<iostream>
#include<cmath>
using namespace std;
int prime(int n){
	for(int i = 2; i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}
void input(int a[],int n){
	for(int i = 0; i<n; ++i) cin >> a[i];
}
void listprime(int a[], int n){
	// int count = 0;
	for(int i = 0; i<n; ++i){
		if(prime(a[i]))cout << a[i] << " ";
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n);
	listprime(a,n);
	return 0;
}