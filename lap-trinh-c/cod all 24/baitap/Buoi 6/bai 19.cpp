//6.19
#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=a;i>0;i--){
		for(int j=1;j<=i-1;j++){
			printf("~");
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=2;i<=a;i++){
		for(int j=1;j<=i-1;j++){
			printf("~");
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//6.19 c2
#include <stdio.h>

int main(){
	int n,tam;
	scanf("%d",&n);
	for(int i=1;i<n*2;++i){
		if(i<n) tam=n-i+1;
		else tam=i-n+1;
		for(int j=1;j<2*tam;++j){
			if(j<tam) printf("~");
			else printf("*");
		}
		printf("\n");
	}
}



