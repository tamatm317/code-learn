#include<iostream>
using namespace std;
void input(int a[], int n){
	for(int i = 0; i<n; ++i) cin >> a[i];
}
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void selection(int a[], int n){
	int min_idx;
	for(int i = 0;i <n-1;++i){
		min_idx = i;
		for(int j = i+1; j<n;++j){
			if(a[min_idx]>a[j])
				min_idx = j;
		}
		if(min_idx!=i){
			swap(&a[min_idx],&a[i]);
		}
	}
}
void output(int a[], int b[], int n){
	int c[2*n];
	int x = 0, y = n-1;
	for(int i = 0; i<2*n;++i){
		if(i%2==0){
			c[i] = a[x++];
		}
		else{
			c[i] = b[y--];
		}
	}
	for(int i = 0; i<n*2;++i) cout << c[i] << " ";
}
int main(){
	int testcase;
	cin >> testcase;
	for(int i = 1; i<=testcase; ++i){
		int n;
		cin >> n;
		int a[n];
		int b[n];
		input(a,n);
		input(b,n);
		selection(a,n);
		selection(b,n);
		cout << "Test " << i << ":\n";
		output(a,b,n);
		cout << endl;
	}
	return 0;
}