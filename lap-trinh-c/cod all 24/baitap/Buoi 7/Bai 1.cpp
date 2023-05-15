#include <stdio.h>

int main(){
	int n; scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int t=i%2;
		for(int j=1;j<=n;j++){
			if(t==0){
				printf("0");t=1;
			}else{
				printf("1");t=0;
			}
		}
		printf("\n");
	}
	return 0;
}


