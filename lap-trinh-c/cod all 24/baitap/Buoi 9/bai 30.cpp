#include <stdio.h>

//c1
//int UCLN(int a, int b){
//	while(a!=b){
//		if(a>b) a=a-b;
//		else b=b-a;
//	}
//	return a;
//}


//c2
int UCLN(int a, int b){
	while(b){
		int  r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a%b==0) printf("%d %d",b,a);
	else if(b%a==0) printf("%d %d",a,b);
	else printf("%d %d",UCLN(a,b),a*b/UCLN(a,b));
	return 0;
}
