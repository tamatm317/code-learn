//19.9 
#include <stdio.h>
#include <string.h>

int main(){
	char a[1001],b[1001];
	scanf("%s%s",a,b);
	for(int i=0;i<strlen(a);++i){
		if(a[i]==b[i]) printf("0");
		else printf("1");
	}
}
