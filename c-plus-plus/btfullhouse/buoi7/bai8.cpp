#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
	set<char> s;
	string a,b;
	cin >> a >> b;
	for(int i = 0; i<a.size(); ++i){
		s.insert(a[i]);
	}
	for(int i = 0; i<b.size();++i){
		s.insert(b[i]);
	}
	for(auto x: s){
		cout << x;
	}
}