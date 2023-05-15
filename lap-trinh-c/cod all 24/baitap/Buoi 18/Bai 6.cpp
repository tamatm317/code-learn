#include <stdio.h>
#include <string.h>
char a[100];

void pl(){
	for(int i=strlen(a)-1;i>=0;i--){
		if(a[i]==' ') continue;
		printf("%c ",a[i]);
	}
}

int main(){
	gets(a);
	pl();
	return 0;
}
