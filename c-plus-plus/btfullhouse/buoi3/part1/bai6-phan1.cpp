#include <iostream>
#include<cmath>
using namespace std;
int prime(int n){
	for(int i = 2;i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int n;
	cin >> n;
	int count = 0;
	int x =2;
	while(count<n){
		if(prime(x)){
			cout << x << endl;
			++count;
		}
		++x;
	}
}