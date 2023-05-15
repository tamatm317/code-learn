//19.10
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[1001];
	int b[1001],dem=0;
	gets(a);
	memset(b,0,sizeof(b));
	for(int i=0;i<strlen(a);++i){
		if(b[a[i]]==0&&isalpha(a[i])) dem++;     //ktra ki tu
		b[a[i]]++;
	}
	printf("%d",dem);
}
