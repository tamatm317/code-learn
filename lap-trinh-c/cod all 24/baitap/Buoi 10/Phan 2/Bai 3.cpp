#include <stdio.h>

int tong(int x){
	int s=0;
	while(x){
		int t=x%10;
		if(!(t%2)) s+=t;
		x/=10;
	}
	return s;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",tong(n));
}
