#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d",&n);	
	char a[n];
	scanf("%s",a);
	printf("%d",strlen(a)+1);
	return 0;
}
