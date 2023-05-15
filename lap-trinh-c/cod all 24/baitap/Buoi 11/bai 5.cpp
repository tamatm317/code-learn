#include <stdio.h>

int main(){
	int n,t=0;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i++) t+=a[i];
	printf("%.2f",t*1.0/n);
}
