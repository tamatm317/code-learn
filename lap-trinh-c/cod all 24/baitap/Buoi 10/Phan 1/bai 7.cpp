//10.7 p1 c1
#include <stdio.h>

int tim(int x, int y){
	if(x%y==0) return y;
	if(y%x==0) return x;
	if(x>y) return tim(x-y,y);
	else return tim(x,y-x);
}

int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d",tim(x,y));
}





//10.7 p1 c2
#include <stdio.h>

int tim(int x, int y){
	if(!y) return x;
	return tim(y,x%y);
}

int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d",tim(x,y));
}



