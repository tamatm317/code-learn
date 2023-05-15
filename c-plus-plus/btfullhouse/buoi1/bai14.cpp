#include<iostream>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	int max = a/b;
	if(b*max == a) cout << max*b;
	else cout << b*(max+1);
}