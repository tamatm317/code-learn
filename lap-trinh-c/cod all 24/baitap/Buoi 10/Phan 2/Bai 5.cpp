#include <stdio.h>

int tich(int x){
	int s=1;
	while(x){
		int t=x%10;
		s*=t;
		x/=10;
	}
	return s;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",tich(n));
}
