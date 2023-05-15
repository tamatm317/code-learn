#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
int strong(ll n){
	ll res = n;
	ll sum = 0;
	while(res>0){
		int temp = res%10;
		ll factorial = 1;
		for(int i = 1; i<=temp;++i) factorial *=i;
		sum+=factorial;
		res/=10;
	}
	if(sum==n) return 1;
	else return 0;
}
int main(){
	ll left, right;
	cin >> left >> right;
	int count = 0;
	for(int i =left; i<=right; ++i){
		if(strong(i)){
			++count;
			cout << i << " ";
		}
	}
	if(count == 0) cout << -1;
}