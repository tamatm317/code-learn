#include<cstring>
#include<iostream>
using namespace std;
void solve_max(string a, string b){
	for(char &x : a){
		if(x == '5') x='6';
	}
	for(char &x : b){
		if(x == '5') x='6';
	}
	cout << stoll(a) + stoll(b) ;
}
void solve_min(string a, string b){
	for(char &x: a){
		if(x=='6') x='5';
	}
	for(char &x: b){
		if(x=='6') x='5';
	}
	cout << stoll(a) + stoll(b) << " ";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a,b;
		cin >> a ;
		cin >> b;
		solve_min(a,b);
		solve_max(a,b);
		cout << endl;
	}
}