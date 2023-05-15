//19.11
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void chuyen(char c[]){
	for(int i = 0;i < strlen(c);i++){
		c[i] = tolower(c[i]);
	}
}
int main(){
	int n; scanf("%d",&n);
	getchar();
	char c[n];
	gets(c);
	chuyen(c);
	int b[300];
	memset(b,0,sizeof(b));
	for (int i = 0;i < strlen(c);i++){
		b[c[i]]++;
	}
	char a[8] = "pangram";
	for(int i=0;i<strlen(a);++i){
		if(b[a[i]]==0){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
}
