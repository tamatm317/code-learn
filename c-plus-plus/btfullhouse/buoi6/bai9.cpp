#include<iostream>
#include<cmath>
using namespace std;
void input(int **a, int n){
	for(int i= 0; i<n;++i){
		for(int j = 0; j<n;++j){
			cin >> a[i][j];
		}
	}
}
void output(int **a, int n){
	for(int i = 0; i<n;i++){
		int temp = a[i][i];
		a[i][i] = a[i][n-i-1];
		a[i][n-i-1] = temp;
	}
	for(int i = 0; i<n;++i){
		for(int j = 0; j<n;++j){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int n;
	cin >> n;
	int **a = new int *[n];
	for(int i = 0; i<n; ++i){
		a[i] = new int [n];
	}
	input(a,n);
	output(a,n);
	for(int i= 0; i<n; ++i){
		delete a[i];
	}
	delete[]a;
	return 0;
}