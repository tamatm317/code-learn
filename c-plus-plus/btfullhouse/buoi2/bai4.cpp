#include<iostream>
using namespace std;
void tonguoc(int n){
	long long sum = n;
	for(int i = 1; i<=n/2; ++i){
		if(n%i==0) sum*=i;
	}
	cout << sum;
}
int main(){
	int n;
	cin >> n;
	tonguoc(n);
}