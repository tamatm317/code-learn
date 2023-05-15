#include <stdio.h>

void xuat(int n, int a[]){
	for(int i=0;i<n;++i){
		printf("%d ",a[i]);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);

//Bubble sort
//Sap xep noi bot
//	for(int i=n-1;i>0;--i){
//		for(int j=0;j<i;++j){
//			if(a[j]>a[j+1]){
//				int c=a[j];
//				a[j]=a[j+1];
//				a[j+1]=c;
//			}
//		}
//	}

	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(a[j]>a[j+1]){
				int c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
	xuat(n,a);
}
