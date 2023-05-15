#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int b=0;
	while(n>0){
		b+=n%10;
		n/=10;
	}	
	printf("%d",b);	
	return 0;
}
