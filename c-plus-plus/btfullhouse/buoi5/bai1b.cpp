#include<iostream>
using namespace std;
void input(int a[], int n){
	for(int i = 0; i<n; ++i) cin >> a[i];
}
void count(int a[], int n){
	int odd = 0, even = 0;
	for(int i = 0; i<n; ++i){
		if(a[i]%2==0) ++even;
		else ++odd;
	}
	cout << even << " " << odd;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n);
	count(a,n);
}