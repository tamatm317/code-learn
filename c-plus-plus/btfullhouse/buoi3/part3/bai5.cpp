#include<iostream>
#include<cmath>
using namespace std;
long long sum_divisor(int n){
	long long sum = 0;
	for(long long i = 1; i<=sqrt(n);++i){
		if(n%i==0) sum += i+n/i;
		if(i*i==n) sum -= n/i;
	}
	return sum;
}
int main(){
	int test_case;
	cin >> test_case;
	for(int i =1; i<=test_case;++i){
		long long n;
		cin >> n;
		cout << sum_divisor(n) << endl;
	}
}