#include<iostream>
using namespace std;
#define ll long long
void fibonacci(int n){
	ll f0 = 0, f1 = 1;
	cout << f0 << " " << f1 << " ";
	for(int i=3; i<=n; ++i){
		ll fi = f0 +f1;
		f0 = f1;
		f1 = fi;
		cout << fi << " ";
	}
}
int main(){
	int n;
	cin >> n;
	fibonacci(n);
}