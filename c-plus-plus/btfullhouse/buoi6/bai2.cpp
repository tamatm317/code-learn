#include<iostream>
using namespace std;
void input(int **a, int x, int y){
	for(int i = 0; i<x;++i){
		for(int j =0; j<y;++j){
			cin >> a[i][j];
		}
	}
}
void output(int **a, int x, int y){
	for(int i= 0; i<y;++i){
		int sum = 0;
		for(int j = 0; j<x;++j){
			sum+=a[j][i];
		}
		cout << sum << endl;
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