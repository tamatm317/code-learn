#include <stdio.h>

int nt(int x){
	if(x<2) return 0;
	else{
		for(int i=2;i<x;++i)
			if(x%i==0) return 0;
		return 1;
	}
}

int main (){
	int n,d=0;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n;++i){
		if(nt(a[i])) d++;
	}
	printf("%d",d);
	return 0;
}
