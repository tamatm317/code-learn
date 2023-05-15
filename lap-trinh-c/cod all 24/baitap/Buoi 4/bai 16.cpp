#include <stdio.h>

int nto(int x){
	if(x<2) return 0;
	for(int i=2;i<x;i++){
		if(x%i==0) return 0;
	}
	return 1;		
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(nto(i)==1) printf("%d ",i);
	}
	return 0;
}
