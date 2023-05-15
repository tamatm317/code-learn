#include<iostream>
#include<cmath>
using namespace std;
int sum(int n){
	if(n==2) return 1;
	return sum(n-1) + pow(-1,n)*n ;
}
int main(){
	int n;
	cin >> n;
	cout << sum(n);
}