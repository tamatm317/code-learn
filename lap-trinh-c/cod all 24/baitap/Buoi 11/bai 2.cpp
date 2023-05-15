//11.2
#include <stdio.h>

int nt(int n){
	if(n<2) return 0;
	else{
		for(int i=2;i<n;++i) if(n%i==0) return 0;
		return 1;
	}
}

int main(){
	int n,d=0;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n;++i) if(nt(a[i])==1) d++;
	printf("%d",d);
}
