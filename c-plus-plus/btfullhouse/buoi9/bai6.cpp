#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void input(int a[], int n){
	for(int i = 0 ;i<n; ++i){
		cin >> a[i];
	}
}
bool binary(int a[], int n, int x){
	int l = 0, r = n-1;
	for(int i = 0; i<n; ++i){
		int m = (l+r)/2;
		if(a[m] == x)return true;
		else if(a[m]<x){
			l = m +1;
		}
		else{
			r = m-1;
		}
	}
	return false;
}
int main(){
	int n,x;
	cin >> n >> x;
	vector<int> a(n);
	for(int i= 0; i<n;++i){
		cin >> a[i];
	}
	if(binary_search(a.begin(),a.end(),x)) cout << 1;
	else cout << 0;
}