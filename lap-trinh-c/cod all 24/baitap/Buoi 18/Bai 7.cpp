#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){
	char a[300];
	gets(a);
	int dem=0;
	int i;
	printf("%c",toupper(a[0]));
	for(i=1;i<strlen(a);++i){
		if(a[i]==' '){
			dem++;
			if(dem==2) break;
		}
		if(a[i-1]==' '){
			printf("%c",toupper(a[i]));
		}else printf("%c",tolower(a[i]));
	}
	printf(",");
	for(;i<strlen(a);++i){
		printf("%c",toupper(a[i]));
	}
}



//c2
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ct(char a[]){
	a[0]=toupper(a[0]);
	for(int i=1;i<strlen(a);++i){
		a[i]=tolower(a[i]);
	}
}

void ch(char a[]){
	for(int i=0;i<strlen(a);++i){
		a[i]=toupper(a[i]);
	}
}

int main(){
	char b[1000], a[100][100];
	gets(b);
	int n=0;
	char *t=strtok(b," ");
	while(t!=NULL){
		strcpy(a[n++],t);
		t=strtok(NULL," ");
	}
	
	for(int i=0;i<n-1;++i){
		ct(a[i]);
		printf("%s",a[i]);
		if(i==n-2) printf(", ");
		else printf(" ");
	}
	ch(a[n-1]);
	printf("%s",a[n-1]);
}
