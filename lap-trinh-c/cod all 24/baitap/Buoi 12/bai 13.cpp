#include <stdio.h>
#include <math.h>

int ktra(int n){
	if(n<=0) return 0; 
	int x=sqrt(n);
	if(x*x==n) return 1;
	return 0;
}

int main (){
	int n,t=0;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n;++i){
		if(ktra(a[i])) t+=a[i];
	}
	printf("%d",t);
	return 0;
}
