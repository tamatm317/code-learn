#include<iostream>
using namespace std;
void input(int a[], int n){
	for(int i = 0; i<n; ++i) cin >> a[i];
}
void max_1_2(int a[], int n){
	int max = a[0], max2 = a[0];
	for(int i = 0; i<n; ++i){
		if(a[i]>max){
			max2 = max;
			max = a[i];
		}
		if(a[i]<max&&a[i]>max2) max2=a[i];
	}
	cout << max << " ";
	if(max2==max) cout << -1;
	else cout << max2;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n);
	max_1_2(a,n);
}