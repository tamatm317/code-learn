#include <stdio.h>
#include <string.h>

int main(){
	char a[1001];
	gets(a);
	int n=strlen(a),dem=0;
	for(int i=0;i<n;++i){
		if(a[i]=='a') dem++;
	}
	if(dem<=n/2){
		printf("%d",2*dem-1);
	}else printf("%d",n);
}
