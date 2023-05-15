#include <stdio.h>
#include <string.h>

int main(){
	int n;scanf("%d",&n);
	getchar();
	char a[1001];
	gets(a);
	int c=0,b=0;
	for(int i=0;i<strlen(a);++i){
		if(a[i]=='1') b++;
		else if(a[i]=='0') c++;
	}
	if(b!=c){
		printf("1");
	} else{
		printf("2");
	}
}





