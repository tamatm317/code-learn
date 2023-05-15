//5.1
#include <stdio.h>

int gt(int x){
	int t=1;
	for(int i=1;i<=x;i++) t*=i;
	return t;
}

int check(int n){
	int a=n;
	int t=0;
	while(n){
		t+=gt(n%10);
		n/=10;
	}	
	return t==a;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",check(n));
	return 0;
}










