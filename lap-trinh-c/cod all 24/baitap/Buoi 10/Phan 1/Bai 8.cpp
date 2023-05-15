//10.8  p1
#include <stdio.h>

void sd(int n){
	if (n<10) printf("%d",n);
	else sd(n/10);
}

int main(){
	int n;
	scanf("%d",&n);
	sd(n);
}
