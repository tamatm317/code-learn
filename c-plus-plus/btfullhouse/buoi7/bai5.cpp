#include<string>
#include<iostream>
#include<map>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	map<char, int> mp;
	for(int i = 0; i<s.size();++i){
		mp[s[i]]++;
	}
	int max_fre = 0;
	string type;
	for( auto x : mp){
		if(x.second>=max_fre){
			type = x.first;
			max_fre = x.second;
		}
	}
	cout << type;
}