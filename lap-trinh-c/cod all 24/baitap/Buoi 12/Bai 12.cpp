#include <stdio.h>

int ktra(int n){
	while(n!=0){
		if(n%2==0) return 0;
		n/=10;
	}
	return 1;
}

int tim(int a[],int i){
	for(int j=0;j<i;++j){
		if(a[j]==a[i]) return 0;
	}
	return 1;
}

int main (){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n;++i){
		if(ktra(a[i])&&tim(a,i)) printf("%d ",a[i]);
	}
	return 0;
}
