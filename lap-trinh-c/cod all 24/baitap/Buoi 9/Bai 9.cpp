#include <stdio.h>

int dem(long long x){
	int t=0;
	while(x>0){
		t+=x%10;
		x/=10;
	}
	return t;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		long long n;
		scanf("%lld",&n);
		printf("%d\n",dem(n));
	}
}
