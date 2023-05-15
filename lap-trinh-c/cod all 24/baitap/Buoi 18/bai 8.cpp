//c1
#include<stdio.h>
#include<string.h>
#include <ctype.h>



int main(){
	char a[300];
	gets(a);
	int i;
	for(i=strlen(a)-1;i>=0;--i){
		if(a[i-1]==' ') break;
	}
	int tam=i;
	for(;i<strlen(a);++i){
		printf("%c",toupper(a[i]));
	}
	printf(", %c",toupper(a[0]));
	for(int i=1;i<tam;++i){
		if(a[i-1]==' '){
			printf("%c",toupper(a[i]));
		}else printf("%c",tolower(a[i]));
	}
}



//c2
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ch(char a[]){
	for(int i=0;i<strlen(a);++i)
		a[i]=toupper(a[i]);
}

int main(){
	char b[1000], a[100][100];
	gets(b);
	b[0]=toupper(b[0]);
	for(int i=1;i<strlen(b);++i){
		b[i]=tolower(b[i]);
		if(b[i-1]==' '){
			b[i]=toupper(b[i]);
		}
	}
	
	int n=0;
	char *t=strtok(b," ");
	while(t!=NULL){
		strcpy(a[n++],t);
		t=strtok(NULL," ");
	}
	ch(a[n-1]);
	printf("%s, ",a[n-1]);
	for(int i=0;i<n-1;++i){
		printf("%s ",a[i]);
	}
}
