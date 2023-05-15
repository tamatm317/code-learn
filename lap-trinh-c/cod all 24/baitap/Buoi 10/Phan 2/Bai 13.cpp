#include <stdio.h>

int ktra(int a[], int n){
	for(int i=0;i<n;++i) 
		if(a[i]>=0)  return 0;
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	printf("%d",ktra(a,n));
}
