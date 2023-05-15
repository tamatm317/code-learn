//9.12
#include <stdio.h>
#include <math.h>

int fi(long long n){
	long long x1=0;
	long long x2=1;
	while(x2<n){   
		long long x3=x1+x2;
		x1=x2;
		x2=x3;
	}
	if(x2==n) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		long long n;
		scanf("%lld",&n);
		if(fi(n)==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}








