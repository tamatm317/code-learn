//5.10
//0C0
//0C1 1C1
//0C2 1C2 2C2
//0C3 1C3 2C3 3C3
//....

#include <stdio.h>

long long tgt(int x){
	long long gt=1;
	for(int i=1;i<=x;i++){
		gt*=i;
	}
	return gt;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("%lld ",tgt(i)/(tgt(j)*tgt(i-j)));
		}
		printf("\n");
	}
	return 0;
}












