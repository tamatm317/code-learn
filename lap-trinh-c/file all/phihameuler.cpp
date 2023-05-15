#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll phi (ll n){
	ll ans = n;
	for (ll i = 2; i<=n; ++i){
		if( n%i == 0){
			// ans =ans*(1-1/i);
			// ans = ans - ans/i;
			ans -= ans/i;
			while ( n%i == 0) n/=i;
		}
	}
	return ans;
}
// int ntcn(ll n){

// }
int main(){
	ll n;
	cin >> n;
	cout << phi(n);
}
