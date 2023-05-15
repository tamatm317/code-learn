#include<iostream>
using namespace std;
long long factorial(int n){
	if(n==1) return 1;
	return n*factorial(n-1);
}
int main(){
	int n,k;
	cin >> n >> k;
	if(n==1&&k==1)cout<<1;
	int x = n-k;
	cout << 1ll*factorial(n)/(factorial(k)*factorial(n-k));
}