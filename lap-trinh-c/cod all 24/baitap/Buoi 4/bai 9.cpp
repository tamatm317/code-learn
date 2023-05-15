#include <stdio.h>

int nto(int x){
	if(x<2) return 0;
	for(int j=2;j<x;j++){
		if(x%j==0) return 0;
	}
	return 1;
}


int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(nto(i)==1) printf("%d ",i);
	}
	return 0;
}
