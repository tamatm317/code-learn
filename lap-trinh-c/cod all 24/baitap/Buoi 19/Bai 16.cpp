#include <stdio.h>
#include <string.h>

int check(char a[], char b[], char c[]){
	for(int i=0;i<strlen(a);i++){
		if(a[i]!=c[i]&&b[i]!=c[i])
			return 0;
	}
	return 1;
}


int main(){
	char a[1000],b[1000],c[1000];
	scanf("%s%s%s",a,b,c);
	if(check(a,b,c)){
	printf("YES");
	}
	else printf("NO");
    return 0;
}
