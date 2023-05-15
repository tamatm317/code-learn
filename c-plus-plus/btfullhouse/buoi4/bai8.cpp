#include<iostream>
using namespace std;
int c = 0;
int count(long long n){
	if(n<10) return 1;
	return 1 + count(n/10);
}
int main(){
	long long n;
	cin >> n;
	cout << count(n);
}