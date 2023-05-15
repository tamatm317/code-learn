//1.30
#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==0){
		if(b==0){
			if(c==0) printf("INF");
			else printf("NO");	
		}else printf("%.2f",(float)-c/b);
		
	}else{
		int denta=b*b-4*a*c;
		if(denta<0) printf("NO");
		else if(denta==0){
			printf("%.2f",-b/(2.0*a));
		}else{
			float x1= (-sqrt(denta)-b)/(2*a);
			float x2= (sqrt(denta)-b)/(2*a);
			printf("%.2f %.2f",x2,x1);
		}
	}
	return 0;
}
