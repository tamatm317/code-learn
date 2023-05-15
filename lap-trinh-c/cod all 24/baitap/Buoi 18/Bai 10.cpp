#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char a[100], b[100];
	gets(a);
	gets(b);
	scanf("%d",&n);
	int dem=1,i=0;
	while(dem!=n){
		if(a[i]==' '){
			dem++;
		}
		printf("%c",a[i]);
		++i;
	}
	printf("%s ",b);
	for(;i<strlen(a);++i) printf("%c",a[i]);
}


//c2
#include <stdio.h>
#include <string.h>

int main(){
	char b[1000],c[1000],a[100][100];
	gets(b);
	gets(c);
	int n=0,x;
	scanf("%d",&x);
	char *t=strtok(b," ");
	while(t!=NULL){
		strcpy(a[n++],t);
		t=strtok(NULL," ");
	}
	
	for(int i=0;i<x-1;++i){
		printf("%s ",a[i]);
	}
	printf("%s ",c);
	for(int i=x-1;i<n;++i){
		printf("%s ",a[i]);
	}
}



