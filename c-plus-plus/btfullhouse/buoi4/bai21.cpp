#include<iostream>
using namespace std;
void input(int a[], int n){
	for(int i = 0; i<n; ++i) cin >> a[i];
}
void c_even(int a[], int n){
	int even = 0;
	for(int i= 0;i<n; ++i){
		if(a[i]%2==0)++even;
	}
	cout << even;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n);
	c_even(a,n);
}