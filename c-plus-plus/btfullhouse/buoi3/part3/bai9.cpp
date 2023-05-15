#include<iostream>
using namespace std;
#define ll long long
void total(ll n){
	ll res= n;
	int sum = 0;
	while(res>0){
		int temp = res%10;
		sum+=temp;
		res/=10;
	}
	cout << sum;
}
int main(){
	int n;
	cin >> n;
	for(int i =1; i<=n; ++i){
		ll x;
		cin >> x;
		total(x);
		cout << endl;
	}
}