#include<iostream>
using namespace std;
int main(){
	char n;
	cin >> n;
	if(n>=97&&n<122){
		n+=1;
		cout << n;
	}
	else if(n>=65&&n<90){
		n+=33;
		cout << n;
	}
	else if(n=='z'||n=='Z') cout << "a";
	else cout << "INVALID";
}