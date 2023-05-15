#include <stdio.h>

int xuat(int n, int a[]){
	for(int i=0;i<n;++i) printf("%d ",a[i]);
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
		
	for(int i=0;i<n-1;++i){
		for(int j=n;j>i;--j){
			if(a[j-1]>a[j]){
				int c=a[j-1];
				a[j-1]=a[j];
				a[j]=c;
			}
		}
		xuat(n,a);
		if(kt(n,a)) break;
	}	
}
