#include<iostream>
#include<cmath>
using namespace std;
long long gcd(long long a, long long b){
	while(a*b!=0){
		if(a>b) a%=b;
		else b%=a;
	}
	return a+b;
}
long long lcm(long long a, long long b){
	return 1ll*abs(a*b)/gcd(a,b);
}
int main(){
	int a,b;
	cin >> a >> b;
	cout << gcd(a,b) << " " << lcm(a,b);
}