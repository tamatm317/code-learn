#include <stdio.h>

int nto(int x){
	if(x<2){
		return 0;
	}else{
		for(int j=2;j<x;j++){
			if (x%j==0) return 0;
		}
		return 1;
	}
}

int dao(int n){
	int t=0;
	int tam=n;
	while(tam>0){
		t=t*10+tam%10;
		tam/=10;
	}
	return t;
}


int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++){
		if(nto(i)==1&&nto(dao(i))==1&&i!=dao(i)){
			printf("%d ",i);
		}
	}
	return 0;
}
