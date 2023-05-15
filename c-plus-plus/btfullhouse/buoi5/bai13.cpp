#include<iostream>
using namespace std;
int check[1000001] = {0};
void input(int a[], int n, int check[]){
	for(int i=0; i<n;++i){
		cin >> a[i];
		++check[a[i]];
	}
}
void output(int a[], int n , int check[]){
	for(int i = 0; i<n;++i){
		if(check[a[i]]!=0){
			cout << a[i] << " " << check[a[i]] << endl;
			check[a[i]] = 0;
		}
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n,check);
	output(a,n,check);
}