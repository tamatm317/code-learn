// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// void progress(string s){
// 	s+="a";
// 	int result = 0;
// 	int sum = 0;
// 	for(char x : s){
// 		if(isdigit(x)){
// 			sum = sum*10 + x - '0';
// 		}
// 		else{
// 			result += sum;
// 			sum = 0;
// 		}
// 	}
// 	// result +=sum;
// 	cout << result << endl;;
// }
// int main(){
// 	int t;
// 	cin >> t;
// 	cin.ignore();
// 	while(t--){
// 		string s;
// 		cin >> s;
// 		progress(s);
// 	}
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    	string s;
	    getline(cin, s);
	    string str = "";
	    long long sum = 0;
	    for(int i = 0; i <= (int)s.length(); ++i){
	        if(s[i] >= '0' && s[i] <= '9'){
	            str.push_back(s[i]);
	        }
	        else{
	            if(str != ""){
	                sum += stoll(str);
	                str = "";
	            }
	        }
	    }
	    cout << sum << endl;
    }
    return 0;
}
