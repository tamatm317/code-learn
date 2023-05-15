#include<iostream>
using namespace std;
void input(int a[], int n){
	for(int i = 0 ;i<n; ++i){
		cin >> a[i];
	}
}
int comparator(const void *a, const void *b){
	return *(long long*)a - *(long long*)b;
}
int check(int a[], int n){
	int sum = 0;
	for(int i = 0; i<n; ++i){
		a[i] = a[i]*a[i];
	}
	for(int i = n-1; i>=2; --i){
		int l = 0, r= n-1;
		while(l<r){
			if(a[l]+a[r]==a[i]){
				sum = a[l] + a[r] + a[i];
				break;
			}
			else if (a[l]+a[r] < a[i]){
				++l;
			}
			else --r;
		}
	}
	if(sum!=0) return 1;
	else return 0;
}
int main(){
	int testcase;
	cin >> testcase;
	for(int i = 0;i<testcase;i++){
		int n;
		cin >> n;
		int a[n];
		input(a,n);
		qsort(a,n,sizeof(int), comparator);
		if(check(a,n)) cout << "YES\n";
		else cout << "NO\n";
	}
}