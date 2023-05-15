#include<iostream>
#define ll long long 
using namespace std;
int check(ll n){
	while(n>0){
		int temp = n%10;
		if(temp%2==0)return 0;
		n/=10;
	}
	return 1;
}
int main(){
	ll n;
	cin >> n;
	if(check(n))cout<<1;
	else cout << 0;
}