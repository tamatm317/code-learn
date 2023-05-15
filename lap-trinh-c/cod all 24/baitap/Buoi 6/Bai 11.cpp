//6.11
#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=i;j>1;j--){
			printf("%d ",j);
		}
		for(int j=1;j<=a-i+1;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}

