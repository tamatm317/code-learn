#include<cstring>
#include<iostream>
using namespace std;
long long gt(int n){
	long long s =1;
	for(int i = 1; i<=n;++i) s*=i;
	return s;
}
int main(){
	int n,k;
	cin >> n >> k;
	int n1=n-1,k1=k-1;
	cout << gt(n1)/(gt(k1)*gt(n1-k1));
}