//4.11
#include <stdio.h>
int gt(int x){
	int t=1;
	for(int i=1;i<=x;i++) t*=i;
	return t;
}

int st(int n){
	int x=n;
	int t=0;
	while(n>0){
		t+=gt(n%10);
		n/=10;
	}
	if(x==t) return 1;
	else return 0;
}
int main(){
	int a,b,dem=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(st(i)==1) {
			dem++;
			printf("%d ",i);
		}
	}
	if(dem==0) printf("0");
	return 0;
}
