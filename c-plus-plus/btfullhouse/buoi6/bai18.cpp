#include<iostream>
using namespace std;
void input(int **a, int row, int cols){
	for(int i = 0; i<row; ++i){
		for(int j= 0; j<cols; ++j){
			cin >> a[i][j];
		}
	}
}
void transposition(int **a, int row, int cols){
	int b [cols][row];
	for(int i = 0; i<cols; ++i){
		for(int j = 0; j<row; ++j){
			b[i][j] = a[j][i];
		}
	}
	int result[row][row];
	for(int i = 0; i<row; ++i){
		for(int j = 0; j<row; ++j){
			result[i][j] = 0;
			for(int k = 0; k<cols;++k){
				result[i][j] += a[i][k] * b[k][j];
			}
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int row, cols;
	cin >> row >> cols;
	int **a = new int *[row];
	for(int i = 0; i<row; ++i){
		a[i] = new int [cols];
	}
	input(a, row, cols);
	transposition(a, row, cols);
	for(int i = 0; i<row; ++i){
		delete a[i];
	}
	delete[]a;
	return 0;
}