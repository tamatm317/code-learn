// LIFO
#include<iostream>
#include<stack>
#include<cstring>
#include<sstream>
using namespace std;
void solve(){
	string s; cin >> s;
	stack<char> st;
	for( char x : s){
		if( x == '('){
			st.push(x);
		}
		else{
			if(st.empty()){
				cout << "INVALID\n";
				return;
			}
			else{
				st.pop();
			}
		}
	}
	if (st.empty()){
		cout << "VALID\n";
	}
	else cout << "INVALID\n";
}
int main(){
	// int n; cin >> n;
	// stack<int> st;
	// while(n!=0){
	// 	st.push(n%2);
	// 	n/=2;
	// }
	// while(!st.empty()){
	// 	cout << st.top();
	// 	st.pop();
	// }
	// stack<string> st;
	// string s;
	// getline(cin,s);
	// stringstream ss(s);
	// string word;
	// while(ss>>word){
	// 	st.push(word);
	// }
	// while(!st.empty()){
	// 	cout << st.top();
	// 	st.pop();
	// }
	// st.push(1);
	// st.push(2);
	// cout << st.pop();
	// dau ngoac hop le
	solve();
}