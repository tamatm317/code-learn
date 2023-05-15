#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=1;i<=n;++i){
		char a[1001];
		scanf("%s",a);
		int d=-1, c=-1,dem=0;
		for(int i=0;i<strlen(a);++i){
			if(a[i]=='1'){
				if(d==-1) d=i;
				c=i;
				++dem;
			}
		}
		if(dem==0) printf("0\n");
		else printf("%d\n",c-d-dem+1);
	}
}
