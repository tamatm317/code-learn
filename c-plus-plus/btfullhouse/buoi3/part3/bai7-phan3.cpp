#include<iostream>
#include<cmath>
using namespace std;
int count(long long n){
	int res = 1;
	for(long long i = 2; i<=sqrt(n);++i){
		int cnt = 0;
		while(n%i==0){
			++cnt;
			n/=i;
		}
		res*=(cnt+1);
	}
	if(n!=1) res*=2;
	return res;
}
int main(){
	int n;
	cin >> n;
	for(int i = 1; i<=n;++i){
		long long x; 
		cin >> x;
		if(count(x)%2==1)cout<<"YES" << endl;
		else cout << "NO" << endl;
	}
}