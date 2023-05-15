#include<bits/stdc++.h>
using namespace std;
int b[10000] = {0};
void input(int *a, int n){
	for(int i = 0; i<n; ++i){
		cin>> a[i];
		++b[a[i]];
	}
}
void output(int *a, int n){
	for(int i = 0; i<n; ++i){
		if(b[a[i]]!=0){
			cout << a[i] << " " << b[a[i]];
			b[a[i]] = 0;
		}
	}
}
int main(){
	int n;
	cin >> n;
	int *a = new int [n];
	input(a,n);
	output(a,n);
	delete[]a;
}