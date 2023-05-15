//9.28   c1
#include<stdio.h>
#include<math.h>


int main(){
	int a,b,c,n;
	scanf("%d%d%d%d",&a,&b,&c,&n);
	int i;
	for(i=pow(10,n-1);i<pow(10,n);i++){
		if(i%a==0&&i%b==0&&i%c==0){
			printf("%d",i);
			return 0;
		}
	}
	printf("-1");
}











//9.28       c2
#include<stdio.h>
#include<math.h>

int ucln(int a, int b){
	while(b){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}

long long bcnn(int a, int b){
	return 1ll*a*b/ucln(a,b);
}

int main(){
	int a,b,c,n;
   	scanf("%d%d%d%d",&a,&b,&c,&n);
    long long tam=bcnn(bcnn(a,b),c);
    long long m=pow(10,n-1);
	long long k = ceil(m*1.0/tam)*tam ;
	if(k < pow(10,n)) printf("%lld",k);
	else printf("-1");
}

