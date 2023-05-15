#include<iostream>
using namespace std;
#define ll long long
void tongcacchuso(ll n){
	ll res = n;
	int total = 0;
	while(res>0){
		int temp = res%10;
		total +=temp;
		res/=10;
	}
	cout << total;
}
int main(){
	ll n;
	cin >> n;
	tongcacchuso(n);
	return 0;
}