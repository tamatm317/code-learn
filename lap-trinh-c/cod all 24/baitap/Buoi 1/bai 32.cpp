#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a=n/5;
	int b=(n-a*5)/4;
	int c= (n-a*5-b*4)/3;
	int d=(n-a*5-b*4-c*3)/2;
	int e=n-a*5-b*4-c*3-d*2;
	printf("%d",a+b+c+d+e);
	return 0;
}
