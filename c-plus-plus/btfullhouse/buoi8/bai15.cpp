#include<iostream>
#include<sstream>
#include<vector>
#include<cstring>
using namespace std;
int main(){
	string s, a;
	getline(cin,s);
	getline(cin,a);
	stringstream ss(s);
	string token; // tách từng từ ra 
// rồi lưu vào token, token s.sánh với a	
	vector<string> v;
	while (ss >> token){
		if(token!=a){
			v.push_back(token);
		}
	}
	for(int i= 0; i<v.size(); i++){
		cout << v[i];
		if(i!=v.size()-1){
			cout << " ";
		}
	}
}