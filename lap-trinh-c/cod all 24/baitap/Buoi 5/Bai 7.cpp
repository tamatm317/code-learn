//5.7
#include <stdio.h>
#include <math.h>
int n,dem=0,sd,sc;

void lsd(){
	sd=n;
	while(sd>=10){
		dem++;
		sd/=10;
	}
}

int quydoi(){
	lsd();
	int sm=n- sd*pow(10,dem)+sc*pow(10,dem)-sc+sd;
	return sm;
}

int main(){
	scanf("%d",&n);
	sc=n%10;
	printf("%d",quydoi());
	return 0;
}
