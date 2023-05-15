#include <bits/stdc++.h>
using namespace std;
int input(int a[], int n){
	for (int i = 0; i<n; ++i) cin >> a[i];
}
int sum(int a[], int n){
	int sum = 0;
	for (int i = 0; i<n; ++i){
		sum +=a[i];
	}
	return sum;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n);
	cout << sum(a,n);
}