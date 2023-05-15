//1.31

#include "stdio.h"

int main(){
	int n;
	scanf("%d",&n);
	if(n%2==0)	printf("4 %d",n-4);
	else{
		if((n-9)<9) printf("%d 9",n-9);
		else printf("9 %d",n-9);
	}
}

