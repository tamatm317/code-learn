#include<iostream>
using namespace std;
void input(int a[], int n){
	for(int i= 0; i<n; ++i) cin >> a[i];
}
void sliding(int a[], int n, int k){
	long long sum = 0;
	for(int i = 0; i<k;++i) sum+=a[i];
	long long res = sum;
	int idx = 0;
	for(int i=k; i<n;++i){
		sum = sum - a[i-k]+ a[i];
		if(sum >=res){
			res= sum;
			idx = i-k+1;
		}
	}
	cout << res << endl;
	for(int i = idx; i<idx+k;++i){
		cout << a[i] << " ";
	}
}
int main(){
	int n,k;
	cin >> n >> k;
	int a[n];
	input(a,n);
	sliding(a,n,k);
	return 0;
}