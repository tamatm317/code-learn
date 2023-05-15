#include<iostream>
using namespace std;
void input(int a[], int n){
	for(int i = 0; i<n;++i) cin >> a[i];
}
int *merge(int *a, int n, int *b, int m){
	int *c = new int [n+m];
	int i = 0, j = 0, cnt =0;
	while(i<n&&j<m){
		if(a[i]<b[j]){
			c[cnt++] = a[i++];
		}
		else{
			c[cnt++] = b[j++];
		}
	}
	for(int k = i; k<n;++k){
		c[cnt++] = a[k];
	}
	for(int k = j; k<m;++k){
		c[cnt++] = b[k];
	}
	return c;
}
int *mergeSort(int a[], int n){
	if(n==1) return a;
	int mid = n/2;
	int *m1 = new int[mid];
	int *m2 = new int[n-mid];
	for(int i = 0; i<mid; ++i){
		m1[i] = a[i];
	}
	for(int i = 0; i<n-mid;++i){
		m2[i] = a[mid+i];
	}
	m1 = mergeSort(m1,mid);
	m2 = mergeSort(m2,n-mid);
	return merge(m1,mid,m2,n-mid);
}
int main(){
	int n,m;
	cin >> n >> m;
	int a[n], b[m];
	input(a,n);
	input(b,m);
	int *c = merge(a,n,b,m);
	int *d = mergeSort(c,n+m);
	for(int i = 0; i<n+m;++i){
		cout << d[i] << " ";
	}
	delete[]c;
	delete[]d;
}