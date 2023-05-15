//9.10 p1
#include <stdio.h>
#include <math.h>

int nto(int x){
	if(x<2) return 0;
	else{
		for(int i=2;i<=sqrt(x);i++){
			if(x%i==0) return 0;
		}
		return 1;
	}
}

int tang(int x){
	int t=x%10;
	x/=10;
	while(x!=0){
		if((x%10)<=t) return 0;
		t=x%10;
		x/=10;
	}
	return 1;
}
//9.10 p2
int giam(int x){
	int t=x%10;
	x/=10;
	while(x!=0){
		if((x%10)>=t) return 0;
		t=x%10;
		x/=10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	int d=0;
	for(int i=pow(10,t-1);i<pow(10,t);i++){
		if(nto(i)==1&&(giam(i)==1||tang(i)==1))  d++;
	}
	printf("%d",d);
}
