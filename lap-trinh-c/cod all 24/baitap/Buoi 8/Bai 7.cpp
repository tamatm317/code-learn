#include <stdio.h>

int gt(int x){
	int t=1;
	for(int i=1;i<=x;i++) t*=i;
	return t;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b) printf("%d",gt(a));
	else printf("%d",gt(b));
}
