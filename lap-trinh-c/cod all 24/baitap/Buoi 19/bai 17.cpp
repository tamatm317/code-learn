//chua nop duoc
#include <stdio.h>
#include <string.h>

int main(){
	int n,dem=0;
	scanf("%d",&n);
	getchar();
	char a[1001];
	gets(a);
	for(int i=0;i<strlen(a)-1;i+=2){
		if(a[i]==a[i+1]){
			dem++;
			if(a[i]=='a'){
				a[i]='b';
			}else a[i]='a';
		}
	}
	printf("%d\n%s",dem,a);
}
