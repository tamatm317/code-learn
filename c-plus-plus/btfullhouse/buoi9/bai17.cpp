#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
void input(vector<int> &a, int n){
	int x;
	for(int i=0; i<n; ++i){
		cin >> x;
		a.push_back(x);
	}
}
void progress(vector<int> a, int n, int k){
	int cnt = 0;
	// sort(a.begin(),a.end());
	for(int i = 0; i<n-1; ++i){
		for(int j = i+1; j<n;++j){
			if(a[j]==0 || a[i]== 0){
				continue;
			}
			else if (abs(a[i]-a[j])<=k){
				++cnt;
				a[j] = 0;
				a[i] = 0;
			}
		}
	}
	for(int i = 0; i<n; ++i){
		if(a[i]!=0) ++ cnt;
	}
	for(int i= 0; i<n; ++i){
		cout << a[i] << " ";
	}
	cout << cnt << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		vector<int> a;
		input(a,n);
		progress(a,n,k);
	}
}