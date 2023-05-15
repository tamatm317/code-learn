#include<iostream>
using namespace std;
#define ll long long
void tongchanle(ll n){
	ll res = n;
	int odd=0, even=0;
	while(res>0){
		int temp = res%10;
		if(temp%2==0)even+=temp;
		else odd+=temp;
		res/=10;
	}
	cout << even << " "<<odd;
}
int main(){
	ll n;
	cin >> n;
	tongchanle(n);
	return 0;
}