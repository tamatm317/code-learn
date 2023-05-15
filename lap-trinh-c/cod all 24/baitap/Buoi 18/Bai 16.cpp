#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[1000];
	gets(a);
	for(int i=0;i<strlen(a);++i)
		printf("%c",toupper(a[i]));
}
