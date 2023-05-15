#include<iostream>
#include<cmath>
using namespace std;
int prime(int n){
	for(int i = 2; i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}
int tach(int n){
	int sum = 0;
	while(n>0){
		int temp = n%10;
		sum+=temp;
		n/=10;
	}
	return sum;
}
int smith(int n){
	if (prime(n)) return 0;
	int res = n;
	int sum = 0;
	for(int i = 2; i<=sqrt(n);++i){
		while(n%i==0){
			sum +=tach(i);
			n/=i;
		}
	}
	if(n!=1) sum +=tach(n);
	if(sum==tach(res)) return 1;
	else return 0;
}
int main(){
	int test_case;
	cin >> test_case;
	for(int i = 1; i<=test_case;++i){
		int n;
		cin >> n;
		if(smith(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
		// smith(n);
	}
}