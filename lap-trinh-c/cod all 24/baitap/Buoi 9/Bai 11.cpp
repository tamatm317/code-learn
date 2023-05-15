#include <stdio.h>
#include <math.h>

int fi(int n){
	int x1=0;
	int x2=1;
	for(int i=3;i<=n;i++){
		int x3=x1+x2;
		x1=x2;
		x2=x3;
		printf("%d ",x2);
	}
}

int main(){
	int t;
	scanf("%d",&t);
	printf("0 1 ");
	fi(t);
	return 0;
}
