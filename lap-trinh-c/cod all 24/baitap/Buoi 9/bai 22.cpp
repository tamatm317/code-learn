//9.22
#include <stdio.h>
#include <math.h>

int socuoi(int n){
	int t=n%10;
	n/=10;
	while(n!=0){
		if(n%10>t) return 0;
		n/=10;
	}
	return 1;
}

int nt(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int n,dem=0;
	scanf("%d",&n);
	for(int i=2;i<n;++i){
		if(socuoi(i)&&nt(i)) {
			printf("%d ",i);
			dem++;
		}
	}
	printf("\n%d",dem);
}
