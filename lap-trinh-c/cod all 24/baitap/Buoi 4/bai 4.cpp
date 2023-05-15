//4.4   p1
#include <stdio.h>

int ktrafbn(int n){
	//tinh tong
	int x=0;
	while(n>0){
		x+=n%10;
		n/=10;
	}
	
	//ktra
	int x1=0;
	int x2=1;
	while(x2<x){
		int x3=x1+x2;
		x1=x2;
		x2=x3;	
	}
	if(x2==x) return 1;
	else return 0;
}



//4.4   p2
int nto(int x){
	if(x<2) return 0;
	for(int i=2;i<x;++i){
		if(x%i==0) return 0;
	}
	return 1;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;++i){
		if(nto(i)==1&&ktrafbn(i)==1) printf("%d ",i);
	}
	return 0;
}
