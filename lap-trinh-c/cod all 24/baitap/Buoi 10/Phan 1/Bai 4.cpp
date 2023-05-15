//10.4
#include <stdio.h>

int d(int n){
	if (n<10) return 1;
	return 1+ d(n/10);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",d(n));
}


//d(1234)	=1+ d(123)
//		=1+ 1 +d(12)
//		=1+ 1 +1 +d(1)
//		=1+ 1 +1 +1
