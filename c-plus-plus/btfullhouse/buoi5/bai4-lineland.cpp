#include<iostream>
using namespace std;
int max(int a, int b){
	return a>b?a:b;
}
int min(int a, int b){
	return a<b?a:b;
}
void input(int a[], int n){
	for(int i = 0; i<n;++i) cin >> a[i];
}
void output(int a[], int n){
	for(int i = 0; i<n;++i){
		if(i==0) cout << a[1] - a[0] << " " << a[n-1] - a[0];
		else if(i==n-1) cout << a[n-1] - a[n-2] << " " << a[n-1] - a[0];
		else cout << min(a[i]-a[i-1],a[i+1]-a[i]) << " "<< max(a[i]-a[0],a[n-1]-a[i]);
		cout << endl;
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n);
	output(a,n);
}