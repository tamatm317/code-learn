#include <stdio.h>

int nto(int n){
	if(n<2){
		return 0;
	}else{
		for(int i=2;i<n;i++){
			if(n%i==0){
				return 0;
			}
		}
		return 1;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(nto(i)==1){
			printf("%d ",i);
		}
	}
	return 0;
}
