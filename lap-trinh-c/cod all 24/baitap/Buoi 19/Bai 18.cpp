//19.18 c1
#include <stdio.h>
#include <string.h>

int ktra(char c){
	char a[6]="ueoai";
	for(int i=0;i<strlen(a);++i){
		if(c==a[i]) return 1;
	}
	return 0;
}

int main(){
	int dem=0;
	char a[1001],b[1001];
	gets(a);
	gets(b);
	if(strlen(a)!=strlen(b)){
		printf("No");
		return 0;
	}
	for(int i=0;i<strlen(a);++i){
		if(ktra(a[i])==0&&ktra(b[i])
		||ktra(a[i])&&ktra(b[i])==0){
			printf("No");
			return 0;
		}
	}
	printf("Yes");
}


//19.18 c2
#include <stdio.h>
#include <string.h>

int main(){
	int dem=0;
	char a[1001],b[1001];
	gets(a);
	gets(b);
	if(strlen(a)!=strlen(b)){
		printf("No");
		return 0;
	}
	
	int c[500];
	memset(c,0,sizeof(c));
	char d[6]="ueoai";
	for(int i=0;i<strlen(d);++i){
		c[d[i]]=1;
	}
	
	for(int i=0;i<strlen(a);++i){
		if(c[a[i]]==0&&c[b[i]]||c[a[i]]&&c[b[i]]==0){
			printf("No");
			return 0;
		}
	}
	printf("Yes");
}
