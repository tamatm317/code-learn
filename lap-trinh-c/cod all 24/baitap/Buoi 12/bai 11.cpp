#include <stdio.h>

int ktra(int n){
	while(n>=10){
		n/=10;
	}
	if(n%2==1) return 1;
	return 0;
}

int main (){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n;++i){
		if(ktra(a[i])) printf("%d ",a[i]);
	}
	return 0;
}
