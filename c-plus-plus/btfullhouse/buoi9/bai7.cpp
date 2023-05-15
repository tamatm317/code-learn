#include<vector>
#include<map>
#include<iostream>
using namespace std;
int main(){
	int n,x;
	cin >> n >> x;
	map<int , int> mp;
	vector<int> a(n);
	for(int i = 0; i<n; ++i){
		cin >> a[i];
		mp[a[i]]++;
	}
	int check = 0;
	for(auto t : mp){
		if(x==t.first){
			cout << t.second;
			check = 1;
		}
	}
	if(check == 0) cout << 0;
}