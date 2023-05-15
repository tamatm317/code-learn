#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[1000];
	gets(a);
	for(int i=0;i<strlen(a);++i){
		if(a[i]!=' ') printf("%c ",tolower(a[i]));
	}
}
