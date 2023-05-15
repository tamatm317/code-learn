#include<iostream>
using namespace std;
#define ll long long
void count(ll n){
	ll res = n;
	int count = 0;
	while(res>0){
		res/=10;
		++count;
	}
	cout << count;
}
int main(){
	ll n;
	cin >> n;
	count(n);
	return 0;
}