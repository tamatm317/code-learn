//19.5 
#include <stdio.h>
#include <string.h>

int main(){
	char a[1001], b[1001];
	gets(a);
	gets(b);
	for(int i=0;i<strlen(a);++i){
		if(a[i]!=b[strlen(b)-i-1]) {
			printf("NO");
			return 0;
		}
	}
	printf("YES");
}
