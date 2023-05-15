//2.5
#include <stdio.h>
#include <math.h>

int main(){
	int m,n,x,a;
	scanf("%d%d%d",&m,&n,&x);
	a=abs(m)+abs(n);
	
	if(x>=a&&(x-a)%2==0) printf("YES");
	else printf("NO");
	
	return 0;
}
