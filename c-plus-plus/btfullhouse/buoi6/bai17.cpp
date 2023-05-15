#include<iostream>
#include<cmath>
using namespace std;
void input(int a[][100], int n, int m){
	for(int i = 0; i<n;++i){
		for(int j=0; j<m;++j) cin >> a[i][j];
	}
}
void output(int a[][100], int b[][100], int n, int m, int p){
	int c[n][p];
	for(int i = 0; i<n;++i){
		for(int j= 0; j<p; ++j){
			c[i][j] = 0;
			for(int k = 0; k<m;++k){
				c[i][j] += a[i][k]*b[k][j];
			}
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int m,n,p;
	cin >> n >> m >> p;
	int a[100][100];
	int b[100][100];
	input(a,n,m);
	input(b,m,p);
	output(a,b,n,m,p);
	return 0;
}