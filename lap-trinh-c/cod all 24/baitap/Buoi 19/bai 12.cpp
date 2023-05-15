//19.12
#include <stdio.h>
#include <string.h>

int main(){
	char a[1001],b[1001],c[1001];
	scanf("%s%s%s",a,b,c);
	if(strlen(a)+strlen(b)!=strlen(c)) {
		printf("NO");
		return 0;
	}
	int d[500];
	memset(d,0,sizeof(d));
	for(int i=0;i<strlen(c);++i){
		d[c[i]]++;
	}
	
	for(int i=0;i<strlen(a);++i){
		d[a[i]]--;
		if(d[a[i]]<0){
			printf("NO");
			return 0;
		}
	}
	
	for(int i=0;i<strlen(b);++i){
		d[b[i]]--;
		if(d[b[i]]<0){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
}
