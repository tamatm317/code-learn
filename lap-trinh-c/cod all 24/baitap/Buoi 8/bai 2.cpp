//8.2
#include <stdio.h>

int main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int t=a+b+c+d;
	if(t%3==0&&t/3>=a&&t/3>=b&&t/3>=c){
		printf("YES");
	}else{
		printf("NO");
	}
}

