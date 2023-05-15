//8.5
#include <stdio.h>
int main(){
	int a2,a3,a5,a6;
	scanf("%d%d%d%d",&a2,&a3,&a5,&a6);
	int min=a2;
	if(a5<min){
		min=a5;
	}
	if(a6<min){
		min=a6;
	}
	a2-=min;             
	int min1=a2;
	if(a3<min1) min1 =a3;
	int t1=min*256 +min1*32;
	printf("%d",t1);
}

