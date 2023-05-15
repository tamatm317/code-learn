#include<iostream>
#define ll long long
using namespace std;
void divided_3_5(ll n){
	ll temp = n, res=0;
	while(temp>0){
		res+=temp%10;
		temp/=10;
	}
	if(res%3==0&&n%5==0) cout << 1;
	else cout << 0;
}
int main(){
	ll n; cin >> n;
	divided_3_5(n);
}