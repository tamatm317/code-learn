#include<iostream>
using namespace std;
int sum_even(long long n){
	int sum = 0;
	while(n>0){
		if((n%10)%2==0)sum+=n%10;
		n/=10;
	}
	return sum;
}
int main(){
	long long n;
	cin >> n;
	cout << sum_even(n);
}