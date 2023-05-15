#include<sstream>
#include<vector>
#include<iostream>
#include<cstring>
using namespace std;
void output(string s){
	for(int i= 0; i<s.size(); ++i){
			s[i] = tolower(s[i]);
	}
	vector<string> v;
	stringstream ss(s);
	string temp;
	while( ss >> temp) v.push_back(temp);
	
	cout << v.back();
	cout << "@gmail.com";
	cout << endl;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		output(s);
	}
}