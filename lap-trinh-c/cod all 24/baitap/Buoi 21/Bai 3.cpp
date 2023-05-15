#include <stdio.h>
#include <string.h>

int check(char a[]){
	char b[10001],c[10001];
	strcpy(c,a);
	strcpy(b,strrev(a));
	if(strcmp(b,c)==0) return 1;
	return 0;
}

int main(){
	char a[1001],b[500][500];
	int n=0,c[100];
	memset(c,0,sizeof(c));
	gets(a);
	char *t=strtok(a," ");
	while(t!=NULL){
		if(check(t)) strcpy(b[n++],t);
		t=strtok(NULL," ");
	}
	int max=0,d[1000];
	memset(d,0,sizeof(d));
	for(int i=0;i<n;++i){
		int dem=1;
		if(c[i]!=0) continue;
		for(int j=i+1;j<n;++j){
			if(strcmp(b[i],b[j])==0){
				dem++;
				c[j]=1;
			}
		}
		c[i]=dem;
		d[i]=strlen(b[i]);
		if(d[i]>max){
			max=d[i];
		}
	}
	for(int i=0;i<n;++i){
		if(d[i]==max) printf("%s %d\n",b[i],c[i]);
	}
}

