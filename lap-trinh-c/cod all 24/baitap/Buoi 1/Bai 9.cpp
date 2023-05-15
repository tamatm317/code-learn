#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int m= n*(n+1)*(2*n+1)/6;
	printf("%d",m);
	return 0;
}
