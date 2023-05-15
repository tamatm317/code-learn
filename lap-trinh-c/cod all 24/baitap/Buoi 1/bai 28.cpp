//1.28
#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b&&a==c){
			printf("1");
		}else if (a==b||b==c||c==a){	
			if(2*a*a==c*c||2*b*b==a*a||2*c*c==b*b){
				printf("4");
			}else printf("2");
		}else if(a*a==b*b+c*c||a*a+b*b==c*c||a*a+c*c==b*b){
			printf("3");
		}else printf("5");
	}else printf("INVALID");
	return 0;
}



