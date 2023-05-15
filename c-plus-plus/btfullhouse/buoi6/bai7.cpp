#include<iostream>
#include<cmath>
using namespace std;
void input(int **a, int n, int m){
	for(int i= 0; i<n;++i){
		for(int j = 0; j<m;++j){
			cin >> a[i][j];
		}
	}
}
void output(int **a, int n, int m, int x, int y){
	for(int i = 0; i<m;i++){
		int temp = a[x-1][i];
		a[x-1][i] = a[y-1][i];
		a[y-1][i] = temp; 
	}
	for(int i = 0; i<n;++i){
		for(int j = 0; j<m;++j){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int n,m;
	cin >> n>>m;
	int **a = new int *[n];
	for(int i = 0; i<n; ++i){
		a[i] = new int [m];
	}
	input(a,n,m);
	int x,y; 
	cin >> x >> y;
	output(a,n,m,x,y);
	for(int i= 0; i<n; ++i){
		delete a[i];
	}
	delete[]a;
	return 0;
}