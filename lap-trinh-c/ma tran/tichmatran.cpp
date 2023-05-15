#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m; cin >> n >> m;
	int a[n][n], b[m][m];
	for(int i = 0; i<n; ++i){
		for(int j = 0; j<n; ++j) cin >> a[i][j];
	}
	for(int i = 0; i<m; ++i){
		for(int j = 0; j<m; ++j) cin >> b[i][j];
	}
	int c[0][0],p,q;
	if(n<=m){
		int c[n][n];
		int p = n;
		int q = m;
	}
	else{
		int c[m][m];
		int p = m, q = n;
	}
	for(int i = 0; i<p;++i){
		for(int j = 0; j<q;++j){
			for(int k = 0; k<q;++k){
				c[i][j] += a[i][k]*a[k][i];
			}
		}
	}
	for(int i = 0; i<p; ++i){
		for(int j = 0; j<q; ++j)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}