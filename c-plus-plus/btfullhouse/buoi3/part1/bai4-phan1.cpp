#include<iostream>
#include<cmath>
using namespace std;
int check(int n){
	for(int i =2; i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int testcase;
	cin >> testcase;
	for(int i =1; i<=testcase;++i){
		int x;
		cin >> x;
		if(check(x)) cout << "YES\n";
		else cout << "NO\n";
	}
}