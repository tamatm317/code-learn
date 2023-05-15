#include<iostream>
#include<cmath>
using namespace std;
void tongchiahetcho3(int n){
	long long sum = 0;
	for(int i = 3; i<=n; ++i){
		if(i%3==0) sum+=i;
	}
	cout << sum;
}
int main(){
	int n;
	cin >> n;
	tongchiahetcho3(n);
}