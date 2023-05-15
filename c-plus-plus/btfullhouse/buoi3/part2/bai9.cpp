#include<iostream>
#include<cmath>
using namespace std;
int beautiful(int n){
	for(int i = 2; i<=sqrt(n);++i){
		int count = 0;
		while(n%i==0){
			++count;
			n/=i;
		}
		if(count>=2) return 1;
	}
	return 0;
}
int main(){
	int l,r;
	cin >> l >> r;
	for(int i = l; i<=r; ++i){
		if(beautiful(i)) cout << i << " ";
	}
}