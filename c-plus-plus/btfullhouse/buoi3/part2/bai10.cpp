#include<iostream>
#include<cmath>
using namespace std;
int beautiful(int n){
	int check = 0;
	for(int i = 2; i<=sqrt(n);++i){
		int count = 0;
		while(n%i==0){
			++count;
			n/=i;
		}
		if(count ==1) return 0;
		else check = 1;
	}
	if(n!=1) return 0;
	return check;
}
int main(){
	int l,r;
	cin >> l >> r;
	for(int i = l; i<=r; ++i){
		if(beautiful(i)) cout << i << " ";
	}
}