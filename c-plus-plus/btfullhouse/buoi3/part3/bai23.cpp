#include<iostream>
using namespace std;
#define ll long long
int gcd(ll a, ll b){
	while(a*b!=0){
		if(a>b) a%=b;
		else b%=a;
	}
	return a+b;
}
int main(){
	ll a, b;
	cin >> a >> b;
	if(gcd(a,b)==1)cout<< "YES";
	else cout << "NO";
}