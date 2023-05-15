//hoa -> thuong
#include<iostream>
using namespace std;
int main(){
	char n;
	cin >> n;
	if(n>=65&&n<=90){
		n = n+32;
		cout << n;
	}
	else cout << n;
}