#include <stdio.h>
#include <string.h>

int main(){
	char a[100];
	gets(a);
	strupr(a);
	char *t=a;
	printf("%s",t);
	return 0;
}

