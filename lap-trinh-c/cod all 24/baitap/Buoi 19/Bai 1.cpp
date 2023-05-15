#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[1001];
	gets(a);
	a[0]= toupper(a[0]);
	for(int i=1;i<strlen(a);++i){
		a[i]=tolower(a[i]);
	}
	printf("%s",a);
	return 0;
}
