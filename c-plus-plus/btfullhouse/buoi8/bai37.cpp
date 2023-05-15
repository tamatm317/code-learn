// convert ascii subtract 48
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n;
	cin >> n;
	while (n--){
		cin.ignore(1);
		string s;
		cin >> s;
		for(int i= 0; i<s.size(); ++i){
			if(isdigit(s[i])){
				int tm = int(s[i])-48;
				for(int j= 0; j<tm;++j){
					cout << s[i-1];
				}
			}
		}
		cout << endl;
	}
}