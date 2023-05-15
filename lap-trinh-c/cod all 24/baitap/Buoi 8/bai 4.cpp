//8.4
#include <stdio.h>

int main(){
	int a1,a2,a3,a4,a5;
	scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
	int t=a1+a2+a3+a4+a5;
	if(t%5==0) printf("%d",t/5);
	else printf("-1");
}


