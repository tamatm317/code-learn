#include<string>
#include<iostream>
#include<map>
using namespace std;
int main(){
	string s;
	cin >> s;
	map<char, int> mp;
	for(int i = 0; i<s.length();++i){
		mp[s[i]]++;
	}
	for( auto x : mp){
		cout << x.first << " " << x.second << endl;
	}
}