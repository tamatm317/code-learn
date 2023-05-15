#include <stdio.h>

int main(){
	int m,n,x;
	scanf("%d%d%d",&m,&n,&x);
	if(m+n<=x) printf("%d",m*2+n*2);
	else printf("%d",m+n+x);
	
	return 0;
}

