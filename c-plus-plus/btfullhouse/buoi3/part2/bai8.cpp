#include<iostream>
#include<cmath>
using namespace std;
int max_prime(int n){
	int max = 0;
	for(int i = 2;i<=n;++i){
		while(n%i==0){
			n/=i;
		}
		if(i>max) max = i;
	}
	return max;
}
int main(){
	int test_case;
	cin >> test_case;
	for(int i = 1; i<=test_case;++i){
		int n;
		cin >> n;
		cout << max_prime(n) << endl;
	}
}