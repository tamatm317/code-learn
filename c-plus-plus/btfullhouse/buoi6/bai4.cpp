#include<iostream>
#include<cmath>
using namespace std;
int prime(int n){
	for(int i = 2; i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}
void input(int **a, int x, int y){
	for(int i = 0; i<x;++i){
		for(int j = 0; j<y;++j){
			cin >> a[i][j];
		}
	}
}
void output(int **a, int x, int y){
	int count = 0, idx = -1;
	for(int i = 0; i<y;++i){
		int cnt = 0;
		for(int j = 0; j<x;++j){
			if(prime(a[j][i]))++cnt;
		}
		if(cnt>count){
			count = cnt;
			idx = i;
		}
	}
	// cout << idx +1 << endl;
	for(int i = 0; i<y;++i){
		cout << a[i][idx] << endl;
	}
}
int main(){
	int row, column;
	cin >> row >> column;
	int **a = new int *[row];
	for(int i = 0; i<row; ++i){
		a[i] = new int [column];
	}
	input(a,row,column);
	output(a,row,column);
	for(int i= 0; i<row; ++i){
		delete a[i];
	}
	delete[]a;
	return 0;
}