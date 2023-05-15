//4.6
#include <stdio.h>

void chia(int n){
	for(int i=2;i<=n;i++){
		while(!(n%i)){
			printf("%d ", i);
			n/=i; 
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	chia(n);
}
