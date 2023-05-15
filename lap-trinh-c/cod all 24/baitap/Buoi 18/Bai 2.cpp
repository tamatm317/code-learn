//18.2
#include <stdio.h>
#include <string.h>
char a[100];

void pl(){
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
		else if(a[i]>='a'&&a[i]<='z') a[i]-=32;
	}
	printf("%s",a);
}

int main(){
	gets(a);
	pl();
	return 0;
}
