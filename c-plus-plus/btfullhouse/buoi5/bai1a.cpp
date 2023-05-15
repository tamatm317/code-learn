#include<iostream>
using namespace std;
void input(int a[], int n){
	for(int i = 0; i<n; ++i) cin >> a[i];
}
void max_min(int a[], int n){
	int max = -10e7, min = 10e7;
	for(int i = 0; i<n; ++i){
		if(a[i]>max)max=a[i];
		if(a[i]<min)min=a[i];
	}
	cout << max << " " << min;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n);
	max_min(a,n);
}