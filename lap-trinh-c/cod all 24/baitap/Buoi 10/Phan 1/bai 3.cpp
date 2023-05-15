//10.3  p1
#include <stdio.h>

int fi(int n){
	if (n==1||n==2) return 1;
	return fi(n-1)+fi(n-2);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fi(n));
}

fi(6)	=fi(5)										+fi(4)
		=fi(4)          			+fi(3)			+fi(3)			+fi(2)
		=fi(3)			+fi(2)		+fi(2)+fi(1)	+fi(2)+fi(1)	+1
		=fi(2)+fi(1)	+1			+1	  +1		+1	  +1

