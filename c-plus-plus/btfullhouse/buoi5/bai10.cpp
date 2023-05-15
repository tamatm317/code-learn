#include<iostream>
using namespace std;
int check[10000000]={0};
void input(int a[], int n){
	for(int i = 0; i<n;++i) cin >> a[i];
}
void output(int a[], int n, int check[]){
	for(int i =0; i<n;++i){
		if(check[a[i]]==0){
			cout << a[i] << " ";
			check[a[i]]=1;
		}
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n);
	output(a,n,check);
}