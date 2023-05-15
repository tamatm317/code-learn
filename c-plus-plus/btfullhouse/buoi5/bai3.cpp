#include<iostream>
using namespace std;
void input(int a[], int n){
	for(int i = 0; i<n; ++i) cin >> a[i];
}
void output(int a[], int n){
	cout << a[0] << " ";
	for(int i = 1; i<n;++i){
		int check = 1;
		for(int j = 0; j<i; ++j){
			if(a[i]<=a[j]){
				check = 0;
				break;
			}
		}
		if(check==1) cout << a[i] << " ";
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n);
	output(a,n);
}