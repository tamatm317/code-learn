// S=1+3+5+7+…..+2n−1
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void tongle(int n){
	long long sum = 0;
	for(int i = 1; i<=n; ++i){
		 sum+=i*2-1;
	}
	cout <<  sum;
}
int main(){
	int n;
	cin >> n;
	tongle(n);
}