//17.13
#include <stdio.h>

int main(){
	int n,d=0;
	scanf("%d",&n);
	char a[n];
	scanf("%s",a);
	for(int i=0;i<n;i+=++d) {
		printf("%c",a[i]);
	}	
}


