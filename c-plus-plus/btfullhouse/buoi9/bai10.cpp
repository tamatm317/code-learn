#include<map>
#include<vector>
#include<iostream>
using namespace std;
int main(){
	map<int,int> mp;
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i<n; ++i){
		cin >> a[i];
		mp[a[i]]++;
	}
	int sum = 0;
	for(auto t: mp){
		if(t.second==2) sum +=1;
		else if(t.second>2) sum+=t.second;
	}
	cout << sum;
}