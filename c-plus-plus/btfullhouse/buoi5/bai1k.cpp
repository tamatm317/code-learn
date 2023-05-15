#include<iostream>
using namespace std;
void input(int a[], int n){
	for(int i =0; i<n; ++i) cin >> a[i];
}
void output(int a[], int n){
	int check = 1;
	for(int i =0; i<=n/2;++i){
		if(a[i]!=a[n-i-1]){
			check = 0;
			break;
		}
	}
	if(check==1) cout << "YES";
	else cout << "NO";
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n);
	output(a,n);
}