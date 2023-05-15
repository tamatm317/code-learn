#include<iostream>
#include<vector>
using namespace std;
void input(int a[] , int n){
	for(int i= 0; i<n;++i){
		cin >> a[i];
	}
}
void interchange(int a[], int n){
	for(int i = 0; i<n-1;++i){
		for(int j = i+1;j<n;++j){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void output(int a[], int n){
	interchange(a,n);
	for(int j = 0; j<n;++j) cout << a[j] << " ";
	cout << endl;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n);
	output(a,n);
	return 0;
}