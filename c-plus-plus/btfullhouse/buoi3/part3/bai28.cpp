#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}
ll lcm(ll a, ll b){
	return a/gcd(a,b)*b;
}
ll solve(int x, int y, int z, int n){
	ll res = lcm(lcm(x,y),z);
	ll temp = (ll)pow(10,n-1);
	ll equal = (temp+res-1)/res*res;
	if(equal<(ll)pow(10,n))
		return equal;
	else return -1;
	// return res;
}
int main(){
	int x,y,z,n;
	cin >> x >> y >> z >> n;
	cout << solve(x,y,z,n);
}