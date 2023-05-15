#include<stdio.h>

int main(){
	int n,d=0;
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;i++){
		for(int j=i+1;j<n;++j){
			if(a[j]<a[i]){
				int c=a[j];
				a[j]=a[i];
				a[i]=c;
			}
		}
		printf("%d ",a[i]);
	}
}
