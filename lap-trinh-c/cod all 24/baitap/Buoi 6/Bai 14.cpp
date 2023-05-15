//6.14
#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=a;i>=1;i--){
		for(int j=1;j<=2*(a-i);j++){
			printf("~");
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=2;i<=a;i++){
		for(int j=1;j<=2*(a-i);j++){
			printf("~");
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
