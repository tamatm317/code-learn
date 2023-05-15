// S=2+4+6+8+…...+2∗n.
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void tongchan(int n){
	long long sum = 0;
	for(int i = 1; i<=n; ++i){
		 sum+=i*2;
	}
	cout <<  sum;
}
int main(){
	int n;
	cin >> n;
	tongchan(n);
}