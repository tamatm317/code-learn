#include <stdio.h>
#include <string.h>
char a[1001];

void tim(){
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
	}
}

int main(){
	gets(a);
	tim();
	printf("%s",a);
//	printf("%s",strlwr(a));    
	return 0;
}
