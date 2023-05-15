//5.6
#include <stdio.h>

int ktra(int n){
	int t=0;
	for(int j=1;j<=n/2;j++){
		if(!(n%j)){
			t+=j;
		}
	}
	return t==n;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(ktra(i)){
			printf("%d ",i);
		}
	}
	return 0;
}
