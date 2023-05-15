#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[1001];
	gets(a);
	int dem=1;
	int b[300];
	memset(b,0,sizeof(b));
	for(int i=1;i<strlen(a);++i){
		if(a[i]==a[i-1]){
			dem++;
		}else{
			if(dem%2) b[a[i-1]]++;
			dem=1;
		}
	}
	if(dem%2) b[a[strlen(a)-1]]++;
	for(char i='a';i<='z';++i){
		if(b[i]) printf("%c",i);
	}
}
