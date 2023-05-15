#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%d\n",(23-a)*60+60-b);
	}
	return 0;
}
