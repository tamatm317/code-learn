//2.1
#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	float x,y,z;
	x= sqrt(1.0*a*b/c);
	y= sqrt(1.0*b*c/a);
	z= sqrt(1.0*a*c/b);
	float sum=x+y+z;
	printf("%.2f",sum*4);
	return 0;
}

