#include<iostream>
using namespace std;
void swap(int &a, int &b){
	int temp = a;
	a = b; b = temp;
}
void input(int a[], int n){
	for(int i= 0; i<n; ++i) cin >> a[i];
}
void quickSort(int a[], int left, int right){
	int l = left, r = right;
	int pivot = a[(left+right)/2];
	while(l<=r){
		while(a[l]<pivot) ++l;
		while(a[r]>pivot) --r;
		if(l<=r){
			swap(a[l],a[r]);
			++l;
			--r;
		}
	}
	if(l<right){
		quickSort(a,l,right);
	}
	if(left<r){
		quickSort(a,left,r);
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n);
	quickSort(a,0,n-1);
	for(int i = 0; i<n; ++i) cout << a[i] << " ";
	return 0;
}