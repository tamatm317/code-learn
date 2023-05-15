 
#include<iostream>
#include<cmath>
using namespace std;
int prime[100000];
void sieve(){
	for(int i = 1; i<=100000;++i) prime[i] = i;
	for(int i = 2; i<=sqrt(100000);++i){
		if(prime[i]==i){
			for(int j = i*i; j<=100000;j+=i){
				if(prime[j]==j) prime[j] = i;	
			}
		}
	}
}
// int find(int n){
// 	if(n==1) return 1;
// 	if(n%2==0) return 2;
// 	for(int i = 3; i<=n;i+=2){
// 		if(n%i==0)return i;
// 	}
// }
int main(){
	sieve();
	int tc;
	cin >> tc;
	for(int i = 1; i<=tc;++i){
		int n;
		cin >> n;
		for(int j = 1; j<=n;++j){
			cout << prime[j] << " ";
		}
		cout << endl;
	}
}