//4.1   p1
#include <stdio.h>

int nto(int x){
	if(x<2) return 0;
	for(int i=2;i<x;i++){
		if(x%i==0) return 0;
	}
	return 1;
}

int cs(int x){
	while(x>0){
		if(nto(x%10)==0) return 0;
		x/=10;
	}
	return 1;
}
//4.1   p2
int tong(int x){
	int tong=0;
	while(x!=0){
		tong+=x%10;
		x/=10;
	}
	if(nto(tong)==1) return 1;
	else return 0;
}

int main(){
	int a,b,dem=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(nto(i)==1&&cs(i)==1&&tong(i)==1) dem++;
	}
	printf("%d",dem);
	return 0;
}

