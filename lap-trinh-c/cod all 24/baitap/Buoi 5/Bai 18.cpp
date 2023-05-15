#include <stdio.h>
long long n;

int nto(int x){
	if(x==2||x==3||x==5||x==7){
		return 1;
	}
	else{
		return 0;
	}
}

long long dao(){
	long long t=0;
	long long tam=n;
	while(tam>0){
		t=t*10+tam%10;
		tam/=10;
	}
	return t;
}

int dem(int x){
	long long tam=n;
	int d=0;
	while(tam>0){
		if(x==tam%10) d++;
		tam/=10;
	}
	return d;
}

int tim(int x, long long y){
	while(y>0){
		int t=y%10;
		if(x==t){
			return 0;
		}
		y/=10;
	}
	return 1;
}

int main(){
	scanf("%lld",&n);
	long long m=dao();
	long long g=0;
	while(m>0){
		int t=m%10;
		if(nto(t)==1&&tim(t,g)==1){
			printf("%d %d\n",t,dem(t));
		}
		g=g*10+t;
		m/=10;
	}
	return 0;
}

