#include<vector>
#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> a;
	for(int i= 0; i<n; ++i){
		int x;
		cin >> x;
		a.push_back(x);
	}
	for(int i= 0; i<n;++i){
		cout << a.at(i) << " ";
	}
	int pos, val;
	cin >> pos >> val;
	// a.resize(n);
	for(int i = n; i>pos;--i){
		a[i] = a[i-1]; 
	}
	a[pos] = val;
	for(int i= 0; i<n+1;++i){
		cout << a[i] << " ";
	}

}