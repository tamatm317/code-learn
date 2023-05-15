//chua nop duoc
#include <stdio.h>
#include <string.h>

int main(){
	int c;
	scanf("%d",&c);
	getchar();
	char a[1001];
	gets(a);
	int x=strlen(a);
	for(int i=0;i<=x/2;++i){
		if(a[i]!=a[x-i-1]){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
}
