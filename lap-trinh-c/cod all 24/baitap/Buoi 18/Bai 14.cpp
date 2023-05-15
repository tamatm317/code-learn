#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[100][100], b[1000];
	gets(b);
	
	int n=0;
	char *t=strtok(b," ");
	while(t!=NULL){
		strcpy(a[n++],t);
		t=strtok(NULL," ");
	}
	
	for(int i=0;i<n-1;++i)
		printf("%c",tolower(a[i][0]));
	for(int i=0;i<strlen(a[n-1]);++i){
		printf("%c",tolower(a[n-1][i]));
	}
	printf("@gmail.com");
}

