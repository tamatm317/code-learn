//4.5   c1
#include<stdio.h>  

int main()  
{  
 	int a=0,b=1,c,x;  
 	scanf("%d",&x);  
	printf("\n%d %d",a,b);
  
	for(int i=3;i<=x;i++) {	  
  		c=a+b;  
  		printf(" %d",c);  
  		a=b;  
  		b=c;  
 	}  
 	return 0;
}








//4.5  c2 nang cao
#include <stdio.h>

void fibonacci(int n){
	int dem=2;
	int x1=0;
	int x2=1;
	printf("%d %d ",x1,x2);	
	while(dem<n){
		if(dem==n-1){
			x1=x1+x2;
			printf("%d",x1);
		}else{
			x1=x1+x2;
			x2=x1+x2;
			printf("%d %d ",x1,x2);	
		}
		dem+=2;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	fibonacci(n);
	return 0;
}

