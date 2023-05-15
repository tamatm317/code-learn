//10.5
#include <stdio.h>

int gt(int n){
	if (n==1) return 1;
	return n*gt(n-1);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",gt(n));
}

//gt(5)	=5* gt(4)
//		=5* 4* gt(3)
//		=5* 4* 3* gt(2)
//		=5* 4* 3* 2* gt(1)
//		=5* 4* 3* 2* 1
