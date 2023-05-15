#include <stdio.h>

int ktra(int x){
	while(x){
		int t=x%10;
		if(!(t%2)) return 0;
		x/=10;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",ktra(n));
}
