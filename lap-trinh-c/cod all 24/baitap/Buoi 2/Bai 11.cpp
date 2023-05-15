//2.11
#include <stdio.h>

int main(){
	int k,n,x;
	scanf("%d%d%d",&k,&n,&x);
	int tong=x*(x+1)/2*k;
	printf("%d",tong-n);
	return 0;
}

