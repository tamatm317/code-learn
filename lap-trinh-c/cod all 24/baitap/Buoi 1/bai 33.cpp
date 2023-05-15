#include <stdio.h>

int main(){
	int a,b,n,m;
	scanf("%d%d",&a,&b);
	if(a>b){
		n=b;
		m=a-b;
	}else{
		n=a;
		m=b-a;
	}
	printf("%d %d",n, m/2);
	
	return 0;
}
