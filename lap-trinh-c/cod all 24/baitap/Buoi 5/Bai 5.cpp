#include <stdio.h>


int main(){
	int n;
	scanf("%d",&n);
	int gt=1;
	for(int i=1;i<=n;i++){
		gt*=i;
	}
	printf("%d",gt);
	return 0;
}
