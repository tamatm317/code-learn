//5.16
#include <stdio.h>
#include <math.h>
int n,m;

int nto(int x){
	if(x<2) return 0;
	for(int j=2;j<x;j++){
		if (x%j==0) return 0;
	}
	return 1;
}

int tim(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(nto(i)==1&&x%(i*i)==0){
			return 1;
		}
	}
	return 0;
}

int main(){
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++){
		if(tim(i)==1){
			printf("%d ",i);
		}
	}
}
