//9.27.1
#include <stdio.h>
long long n;

int nto(int x){
	if(x==2||x==3||x==5||x==7)
		return 1;
	return 0;
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
//9.27.2
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





//722334123232277
//
//m=dao=772232321433227
//g=0
//t=n%10= 7
//printf 7 3
//g=7
//m=77223232143322
//
//
//g=7
//t=n%10= 2
//printf 2 6
//g=72
//m=7722323214332
//
//
//g=72
//t=n%10= 2
//k in vi 2 co trong g roi
//g=722
//m=772232321433
//
//
//g=722
//t=n%10= 3
//printf 3 4
//g=7223
//m=77223232143
//
//g=7223
//t=n%10= 3
//k in vi 3 co trong g roi
//g=72233
//m=7722323214
//
//
//g=72233
//t=n%10= 4
//k in vi 4 k p nto
//g=722334
//m=772232321
//
//
//g=722334
//t=n%10= 1
//k in vi 1 k p nto
//g=7223341
//m=77223232

