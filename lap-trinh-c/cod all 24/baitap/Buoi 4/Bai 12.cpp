//4.12
#include <stdio.h>

int kt(int n){
	while(n>0){
		int t=n%10;
		if(t!=0&&t!=6&&t!=8) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int a;
	scanf("%d",&a);
	printf("%d",kt(a));
	return 0;
}
