//8.10
#include <stdio.h>

int main(){
	int x1,y1,x2,y2;
	scanf("%d%d%d%d",&x1,&y2,&x2,&y2);
	
	if(x1==x2){  
		int kc=y2-y1;
		printf("%d %d %d %d",x1+kc, y1, x2+kc,y2);
	}else if(y1==y2){
		int kc=y2-y1;
		printf("%d %d %d %d",x1, y1+kc, x2,y2+kc);
	}else{
		printf("%d %d %d %d",x1,y2, x2,y1);
	}
}
