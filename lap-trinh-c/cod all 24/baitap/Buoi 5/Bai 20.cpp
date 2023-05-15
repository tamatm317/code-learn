//5.20
//Chi het cho so nguyen to nao thi cung chia het cho so nguyen to do
#include <stdio.h>
#include <math.h>

int nto(int x){
	if(x<2) return 0;
	for(int j=2;j<x;j++){
		if (x%j==0) return 0;
	}
	return 1;
}

int ktra(int x){
	int d1=0;
	if(x<=1||nto(x)==1) return 0;
	for(int i=2;i<=x/2;i++){
		if(nto(i)==1&&x%i==0){
			if(x%(i*i)!=0) return 0;
		}
	}
	return 1;
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++){
		if(ktra(i)==1){
			printf("%d ",i);
		}
	}
	return 0;
}
