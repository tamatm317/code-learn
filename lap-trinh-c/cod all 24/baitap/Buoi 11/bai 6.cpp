//11.6
#include <stdio.h>
#include <math.h>

int cp(long long n){
	long long a=sqrt(n);
	if(a*a==n) return 1;
	return 0;
}

int main(){
	int n,d=0;
	scanf("%d",&n);
	long long a[n+1];
	for(int i=0;i<n;i++) {
		scanf("%lld",&a[i]);
		if(cp(a[i])) d++;
	}
	printf("%d\n",d);
	for(int i=0;i<n;i++) 
		if(cp(a[i])) 
			printf("%lld ",a[i]);
}
