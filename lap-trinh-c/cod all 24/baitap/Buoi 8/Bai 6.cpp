//8.6
#include <stdio.h>
int main(){
	int a1,a2,a3,b1,b2,b3,n;
	scanf("%d%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3,&n);
	
	int a=a1+a2+a3;
	n-=ceil(a/5.0);   //ham chia lam tron len
	
	int b=b1+b2+b3;
	n-=ceil(b/10.0);
	
	if(n>=0) printf("YES");
	else printf("NO");
}
