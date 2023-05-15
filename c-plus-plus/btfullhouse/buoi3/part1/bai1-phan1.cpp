#include<iostream>
#include<cmath>
using namespace std;
int check_prmime(int n){
	if(n==0||n==1) return 0;
	for(int i =2; i<=sqrt(n);++i){
		if(n%i==0)return 0;
	}
	return 1;
}
int main(){
	int n;
	cin >> n;
	if(check_prmime(n)) cout << "YES";
	else cout << "NO";
}