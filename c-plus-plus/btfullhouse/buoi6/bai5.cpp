#include<iostream>
#include<cmath>
using namespace std;
void input(int **a, int x, int y){
	for(int i = 0; i<x;++i){
		for(int j = 0; j<y;++j){
			cin >> a[i][j];
		}
	}
}
void output(int **a, int x, int y){
	int idx_row = -1, idx_col = -1, sum_row = 0, sum_col = 0;
	for(int i = 0; i<x;++i){
		int sum = 0;
		for(int j= 0; j<y;++j){
			sum+=a[i][j];
		}
		if(sum>sum_row){
			sum_row = sum;
			idx_row = i;
		}
	}
	for(int i =0; i<y;++i){
		int sum = 0;
		for(int j= 0; j<x;++j){
			sum+=a[j][i];
		}
		if(sum>sum_col){
			sum_col = sum;
			idx_col = i;
		}
	}
	for(int i =0; i<x;++i){
		for(int j= 0; j<y;++j){
			if(i!=idx_row && j!=idx_col){
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
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