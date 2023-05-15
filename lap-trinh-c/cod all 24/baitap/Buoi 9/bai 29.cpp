//9.29   c1
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




0C0
0C1 1C1
0C2 1C2 2C2
0C3 1C3 2C3 3C3
0C4 1C4 2C4 3C4 4C4
0C5 1C5 2C5 3C5 4C5 5C5
....

//kCn = n!/(k!*(n-k)!)


//9.29 c2
#include <stdio.h>

int tohop(int n, int k){
	if(k>n-k) k=n-k;
	int s=1;
	for(int i=0;i<k;++i){
		s= s*(n-i)/(i+1);
	}
	return s;
}

int main(){
	int x;
	scanf("%d",&x);
	for(int n=0;n<x;++n){
		for(int k=0;k<=n;++k){
			printf("%d ",tohop(n,k));
		}
		printf("\n");
	}
	return 0;
}
