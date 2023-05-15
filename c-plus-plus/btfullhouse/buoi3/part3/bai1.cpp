#include<iostream>
using namespace std;
#define ll long long
int reverse(ll n){
	ll res = n,sum = 0;
	while(res>0){
		int temp = res%10;
		sum = sum*10 +temp;
		res/=10;
	}
	if(sum == n) return 1;
	else return 0;
}
int main(){
	int test_case;
	cin >> test_case;
	for(int i = 1; i<=test_case; ++i){
		ll x;
		cin >> x;
		if(reverse(x)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}