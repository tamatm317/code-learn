//9.26
#include<stdio.h>

int main(){
	long long n=0;
	int a=0,b=0,c=0,d=0;
	scanf("%lld",&n);
	while(n>0){
		int s=n%10;
		n/=10;
		if(s==2) a++;
		else if(s==3) b++;
		else if(s==5) c++;
		else if(s==7) d++;
	}
	if(a!=0) printf("2 %d",a);
	if(b!=0) printf("\n3 %d",b);
	if(c!=0) printf("\n5 %d",c);
	if(d!=0) printf("\n7 %d",d);
	return 0;
}
