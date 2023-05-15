//2.3
#include <stdio.h>
#include <math.h>

int main(){
	int m,n,a,t1,t2,s;
	scanf ("%d%d%d",&m,&n,&a);
	
	t1 = ceil(m*1.0/a);
	t2 = ceil(n*1.0/a);
	
	printf ("%d",t1*t2);
	return 0;
}
