#include<iostream>
#include<sstream>
#include<cstring>
#include<vector>
using namespace std;
int main(){
	int cnt = 0;
	string a;
	getline(cin,a);
	stringstream ss(a);
	string word;
	vector<string> v;
	while(ss >> word){
		++cnt;
		// v.push_back(word);
	}
	cout << cnt;
	// for(string print : v){
	// 	cout << print << endl;
	// }
	return 0;
}