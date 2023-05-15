#include<iostream>
#include<cmath>
using namespace std;
int strong(int n){
	int res = n;
	int sum = 0, exponential = 0;
	while(res>0){
		res/=10;
		++exponential;
	}
	res = n;
	while(res>0){
		int temp = res%10;
		sum += pow(temp,exponential);
		res/=10;
	}
	if(sum==n) return 1;
	else return 0;
}
int main(){
	int n;
	 cin >>n;
	 if(strong(n)) cout << 1;
	 else cout << 0;
}