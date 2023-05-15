//15.23
#include <stdio.h>
void xuat(int n, int a[]){
	for(int i=0;i<n;++i){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int kt(int n, int a[]){
	for(int i=0;i<n-1;++i) 
		if(a[i+1]<a[i]) return 0;
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=1;i<n;++i){
		int j=i-1;
		int tam=a[i];
		while(tam<a[j]&&j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=tam;
		xuat(n,a);
		if(kt(n,a)) break;
	}
}
