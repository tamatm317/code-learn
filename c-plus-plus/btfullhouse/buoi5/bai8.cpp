#include<iostream>
using namespace std;
void input(int a[], int n){
	for(int i = 0; i<n; ++i) cin >> a[i];
}
void difference(int a[], int n){
	int count = 0, max_count = 0;

	for(int i = 0; i<n; ++i){
		if(a[i]!=a[i+1]){
			++count;
			if(count>max_count) max_count = count;
		}
		else count = 0;
	}
	cout << count;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n);
	difference(a,n);
	return 0;
}