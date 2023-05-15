#include <bits/stdc++.h>
using namespace std;
int check(int n){
	for(int i = 2; i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int n;
	cin >> n;
	int a[n][n];
	int count = 0;
	for(int i = 0; i<=n/2; ++i){
		++count;
		for(int j = i; j<n-i-1; ++j){
			while(check(count)==0){
				++count;
			}
			a[i][j]=count;
			++count;
		}
		for(int j = i; j<n-i; ++j){
			while(check(count)==0){
				++count;
			}
			a[j][n-i-1] = count;
			++count;
		}
		for(int j = n-i-2; j>=i; --j){
			while(check(count)==0) ++count;
			a[n-i-1][j] = count;
			++count;
		}
		for(int j = n-i-2; j>i; --j){
			++count;
			while(check(count)==0)++count;
			a[j][i] = count;
		}
	}
	for(int i =0; i<n; ++i){
		for(int j = 0; j <n; ++j) cout << a[i][j] << " ";
		cout << endl;
	}
}