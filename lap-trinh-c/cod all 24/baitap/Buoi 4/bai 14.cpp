//4.14
#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	if(a==0) printf("0");
	else{
		int t=1;
		while(a>0){
			t*=a%10;
			a/=10;
		}
		printf("%d",t);
	}
}
