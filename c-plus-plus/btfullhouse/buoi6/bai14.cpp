#include<iostream>
#include<cmath>
using namespace std;
int prime(int n){
	for(int i = 2; i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}
void input(int **a, int x){
	for(int i = x-1; i>=0;--i){
		for(int j = x-1; j>=0;--j){
			cin >> a[j][i];
		}
	}
}
void output(int **a, int x){
	for(int i = 0; i<x; ++i){
		for(int j= 0; j<x; ++j){
			cout << a[i][j] << " ";
		}
		cout<< endl;
	}
}
int main(){
	int x;
	cin >> x;
	int **a = new int *[x];
	for(int i = 0; i<x; ++i){
		a[i] = new int [x];
	}
	input(a,x);
	output(a,x);
	for(int i= 0; i<x; ++i){
		delete a[i];
	}
	delete[]a;
	return 0;
}