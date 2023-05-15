4.13
#include <stdio.h>
#include <math.h>

int tn(int x){
	int y=x;
	int a=0;
	while(x>0){
		a=a*10+x%10;
		x/=10;
	}
	if(y==a) return 1;
	else return 0;
}

int kt(int n){
	while(n>0){
		if(n%10==6) return 1;
		n/=10;
	}
	return 0;
}

int ktra(int x){
	int t=0;
	while(x>0){
		t+=x%10;
		x/=10;
	}
	if(t%10==8) return 1;
	else return 0;
}

int main(){
	int a,b,dem=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(kt(i)==1&&tn(i)==1&&ktra(i)==1) {
			dem++;
			printf("%d ",i);
		}
	}
	if(dem==0) printf("0");
	return 0;
}
