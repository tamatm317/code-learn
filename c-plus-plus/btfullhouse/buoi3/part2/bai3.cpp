#include<iostream>
#include<cmath>
using namespace std;
// int prime(int )
int count_prime(int n){
	int res = 0;
	for(int i = 2; i<=sqrt(n);++i){
		if(n%i==0){
			++res;
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n!=1) ++res;
	return res;
}
int main(){
	int test_case;
	cin >> test_case;
	for(int i = 1; i<=test_case;++i){
		int n;
		cin >> n;
		cout << count_prime(n) << endl;
	}
}