//6.18
#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a-i;j++){
			printf("~");
		}
		for(int j=1;j<=i;j++){
			if(i==1||i==a||j==1||j==i){
				printf("*");
			}else{
				printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}


