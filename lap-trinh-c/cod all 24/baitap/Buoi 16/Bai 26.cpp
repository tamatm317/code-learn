//16.26
#include <stdio.h>

void sxt(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}	
		}
	}
}
void sxg(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]){
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}	
		}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;++k){
		int n;
		scanf("%d",&n);
		int a[n],b[n];
		for(int i=0;i<n;++i) scanf("%d",&a[i]);
		for(int i=0;i<n;++i) scanf("%d",&b[i]);
		sxt(a,n);
		sxg(b,n);
		printf("Test %d:\n",k);
		for(int i=0;i<n;++i){
			printf("%d %d ",a[i],b[i]);
		}
		printf("\n");
	}	
}
