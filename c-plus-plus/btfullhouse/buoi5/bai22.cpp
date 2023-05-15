#include<iostream>
using namespace std;
int codd = 0, ceven = 0;
void input(int a[], int n){
	for(int i = 0; i<n;++i){
		cin >> a[i];
		if(a[i]%2==0) ++ceven;
		else ++codd;
	}
}
int *merge(int *a, int n, int *b, int m){
	int *c = new int[n+m];
	int i = 0, j =0, cnt = 0;
	while(i<n&&j<m){
		if(a[i]<b[j]){
			c[cnt++] = a[i++];
		}
		else{
			c[cnt++] = b[j++];
		}
	}
	for(int k = i; k<n; ++k){
		c[cnt++] = a[k];
	}
	for(int k = j; k<m; ++k){
		c[cnt++] = b[k];
	}
	return c;
}
int *mergeSort(int a[], int n){
	if(n==1) return a;
	int mid = n/2;
	int *m1 = new int [mid];
	int *m2 = new int [n-mid];
	for(int i = 0; i<mid;++i){
		m1[i] = a[i];
	}
	for(int i = 0; i<n-mid;++i){
		m2[i] = a[mid+i];
 	}
 	m1 = mergeSort(m1,mid);
 	m2 = mergeSort(m2,n-mid);
 	return merge(m1, mid, m2 , n-mid);
}
void output(int a[], int n){
	int cnt1 = 0, cnt2= 0;
	int b[ceven], c[codd];
	for(int i = 0; i<n;++i){
		if(a[i]%2==0){
			b[cnt1++] = a[i];
		}
		else{
			c[cnt2++] = a[i];
		}
	}
	for(int i = 0; i<ceven;++i) cout << b[i] << " ";
	for(int i = codd-1; i>=0;--i) cout << c[i] << " ";
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n);
	// output(a,n);
	int *b = mergeSort(a,n);
	output(b,n);
	return 0;
}