#include <stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d\n%d\n%d\n",m+n,n-m,m*n);
	if(m==0) printf("NO");
	else printf("%.2f",1.0*n/m);
}
