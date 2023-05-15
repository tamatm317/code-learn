#include<iostream>
using namespace std;
void tong(int n){
	long long sum = 0;
	for(int i = 1; i<=n; ++i){
		sum+=i;
	}
	cout << sum;
}
int main(){
	int n;
	cin >> n;
	tong(n);
}