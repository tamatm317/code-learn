#include<iostream>
using namespace std;
void input(int a[], int n){
	for(int i = 0; i<n; ++i) cin >> a[i];
}
void increase(int a[], int n){
	int check = 1;
	for(int i = 1; i<n-1;++i){
		if(a[i]<=a[i-1]){
			check= 0;
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
	increase(a,n);
}