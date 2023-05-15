#include <stdio.h>
#include <string.h>

int main(){
	int n,m;scanf("%d%d",&n,&m);
	getchar();
	char a[1001];
	gets(a);
	int b[300];
	memset(b,0,sizeof(b));
	for(int i=0;i<strlen(a);++i){
		b[a[i]]++;
	}
	int min=1e9;
	for(char i='A';i<'A'+m;++i){
		if(b[i]==0){
			printf("0");
			return 0;
		}else if(b[i]<min){
			min=b[i];
		}
	}
	printf("%d",min*m);
}
