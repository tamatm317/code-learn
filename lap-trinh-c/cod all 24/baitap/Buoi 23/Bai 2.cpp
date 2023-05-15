#include <stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int *ptrA = &a, *ptrB = &b;
	int c = *ptrA;
	*ptrA = *ptrB;
	*ptrB = c;
	printf("%d %d",a,b);
	return 0;
}
