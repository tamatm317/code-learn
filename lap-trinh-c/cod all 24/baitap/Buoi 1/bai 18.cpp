//1.18
#include <stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	if(n<=0||n>12||m<=0){
		printf("INVALID");
	}else{
		if(n==1||n==3||n==5||n==7||n==8||n==10||n==12){
			printf("31");
		}else if(n==4||n==6||n==9||n==11){
			printf("30");
		}else{
			if(m%4==0&&m%100!=0||m%400==0)
				printf("29");
			else printf("28");
		}
	}
	return 0;
}
