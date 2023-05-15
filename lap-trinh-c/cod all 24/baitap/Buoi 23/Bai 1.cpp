#include <stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int *ptrA = &a, *ptrB = &b;
	printf("%d %d",*ptrA,*ptrB);
	return 0;
}

