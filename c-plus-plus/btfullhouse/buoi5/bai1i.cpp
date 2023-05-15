#include<iostream>
using namespace std;
void input(int a[], int n){
	for(int i =0; i<n; ++i) cin >> a[i];
}
void output(int a[], int n){
	for(int i = 0; i<n; ++i){
		int count = 0;
		for(int j = 0;j<n;++j){
			if(j!=i&&a[j]>a[i]) ++count;
			if(count==2){
				cout << a[i]<< " ";
				break;
			}
		}
	}
}
int main(){
	int n;
	cin >>n;
	int a[n];
	input(a,n);
	output(a,n);
	return 0;
}