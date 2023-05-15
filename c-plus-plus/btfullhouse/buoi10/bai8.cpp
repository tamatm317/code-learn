#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i= 0; i<n; ++i){
		cin >> a[i];
	}
	int cnt = 0;
	for(int i = 0; i<n-1; ++i){
		for(int j = i; j<n; ++j){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				++cnt;
			}
		}
	}
	cout << cnt;
}