#include<iostream>
using namespace std;
void input(long long a[], int n){
	for(int i =0; i<n; ++i) cin >> a[i];
}
void output(long long a[], int n){
	for(int i = 0; i<n;++i){
		if(a[i]*a[i+1]<0||a[i]*a[i-1]<0)cout <<a[i] << " ";
	}
}
int main(){
	int n;
	cin >> n;
	long long a[n];
	input(a,n);
	output(a,n);
}