#include<iostream>
#include<algorithm>
using namespace std;
void input(int a[], int n){
	for(int i = 0; i<n; ++i){
		cin >> a[i];
	}
}
int comparator(const void *a, const void * b){
	return *(int*)a - *(int*)b; 
}
void output(int a[], int n){
	int cnt = 0, min = 2e9;
	for(int i = 1; i<n; ++i){
		if(a[i]-a[i-1]<min){
			min = a[i] - a[i-1];
			cnt = 1;
		}
		else if (a[i]-a[i-1] == min){
			++cnt;
		}
	}
	cout << min << " " << cnt << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		input(a,n);
		qsort(a,n,sizeof(int),comparator);
		output(a,n);
	}
}