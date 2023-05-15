#include <bits/stdc++.h>
using namespace std;
void input(int *a, int n){
	for (int i = 0; i<n; ++i){
		for (int j = 0; j<n; ++j){
			cin >> a[i][j];
		}
	}
}
void xuat(int **a, int n){
	for (int i = 0; i<n; ++i){
		for (int j = 0; j<n; ++j){
			cout << a[i][j];
		}
	}
}
int main(){
	int n;
	cin >> n;
	int **a = new int[n][n];
	nhapmatran(a,n);
	xuat(a,n);
}