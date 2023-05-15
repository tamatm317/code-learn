//18.4 cach 1
#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){
	char a[300];
	gets(a);
	int dem=0;
	int i;

	for(i=strlen(a)-1;i>=0;--i){
		if(a[i-1]==' '){
			dem++;
		}
		if(dem==2) break;
	}
	
	for(;i<strlen(a);++i){
		if(a[i-1]==' '){
			printf("%c",toupper(a[i]));
		}else printf("%c",tolower(a[i]));
	}
	printf(", ");
	i=0;
	for(int i=0;a[i]!=' ';++i){
		printf("%c",toupper(a[i]));
	}
}

//c2
#include<stdio.h>
#include<string.h>
#include <ctype.h>
void chuyenthuong(char a[]){
	a[0]=toupper(a[0]);
	for(int i=1;i<strlen(a);++i){
		a[i]=tolower(a[i]);
	}
}

void chuyenhoa(char a[]){
	for(int i=0;i<strlen(a);++i)
		a[i]=toupper(a[i]);
}

int main(){
	char a[100][100], b[1000];
	gets(b);
	int n=0;
	
	char *t=strtok(b," ");
	while(t!=NULL){
		strcpy(a[n++],t);
		t=strtok(NULL," ");
	}
	
	for(int i=1;i<n;++i){
		chuyenthuong(a[i]);
		printf("%s",a[i]);
		if(i==n-1) printf(", ");
		else printf(" ");
	}
	chuyenhoa(a[0]);
	printf("%s",a[0]);	
}



