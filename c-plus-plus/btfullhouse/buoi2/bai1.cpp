#include<iostream>
using namespace std;
void tonguoc(int n){
	long long sum = 0;
	for(int i = 1; i<=n/2;++i){
		if(n%i==0) sum+=i;
	}
	sum +=n;
	cout << sum;
}
int main(){
	int n;
	cin >> n;
	tonguoc(n);
}