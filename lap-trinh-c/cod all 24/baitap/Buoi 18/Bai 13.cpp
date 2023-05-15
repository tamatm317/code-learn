#include <stdio.h>
#include <string.h>

int main(){
	char a[1000];
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]==' '){
			continue;
		}else printf("%c",a[i]);
	}
}



//c2
#include<stdio.h>
#include<string.h>
int main(){
	char a[101];
	gets(a);
	int n=0;
	char *t = strtok(a," ");
	while(t != NULL){
		printf("%s", t);
		t = strtok(NULL," ");
	}	
}
