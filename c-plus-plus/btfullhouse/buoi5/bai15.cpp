#include<iostream>
using namespace std;
void input(long long a[], long long n){
	for(long long i=1; i<=n;++i){
		cin >> a[i];
	}
}
void output(long long a[], long long n, long long element){
	for(long long i = 1; i<=element;++i){
		long long l,r;
		cin >> l >> r;
		long long sum = 0;
		for(long long j = l; j<=r;++j){
			sum+=a[j];
		}
		cout << sum << endl;
	}
}
int main(){
	long long n, element;
	cin >> n;
	long long a[n];
	input(a,n);
	cin >> element;
	output(a,n,element);
}