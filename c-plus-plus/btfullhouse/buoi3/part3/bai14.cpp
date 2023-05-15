#include<iostream>
#include<cmath>
// #define int long long
using namespace std;
int sum (int n){
	int res = n, sum = 0;
	while (res>0){
		int temp = res%10;
		sum = sum*10 +temp;
		res/=10;
	}
	if(sum==n) return 1;
	else return 0;
}
int check(int n){
	int count_divisors = 0;
	for(int i=2; i<=sqrt(n);++i){
		int count = 0;
		while(n%i==0){
			++count;
			n/=i;
		}
		if(count!=0)++count_divisors;
	}
	if(n!=1)++count_divisors;
	return count_divisors >=3;
}
int main(){
	int l,r;
	cin >> l >> r;
	int count = 0;
	for(int i = l; i<=r;++i){
		if(sum(i) && check(i)){
			cout << i << " ";
			++count;
		}
	}
	if(count==0)cout<<-1;
}