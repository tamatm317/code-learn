#include<iostream>
using namespace std;
int prime(int n, int x){
	int count = 0;
	for(int i = 2; i<=n;++i){
		if(n%i==0){
			while(n%i==0){
				++count;
				if(count==x)return i;
				n/=i;
			}
		}
	}
	if(n!=1){
		++count;
		if(count ==x) return n;
	}
	return -1;
}
int main(){
	int n,x;
	cin >> n >> x;
	cout << prime(n,x);
}
