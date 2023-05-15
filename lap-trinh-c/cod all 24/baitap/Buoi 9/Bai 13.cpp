#include <stdio.h>
#include <math.h>

int nto(int x){
	if(x<2) return 0;
	else{
		for(int i=2;i<=sqrt(x);i++){
			if(x%i==0) return 0;
		}
		return 1;
	}
}

int fi(int n){
	int tong =0;
	while(n!=0){
		tong+=n%10;
		n/=10;
	}
	int x1=0;
	int x2=1;
	while(x2<tong){
		int x3=x1+x2;
		x1=x2;
		x2=x3;
	}
	if(x2==tong) return 1;
	return 0;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int tam=0;
	for(int i=a;i<=b;i++){
		if(nto(i)==1&&fi(i)==1) printf("%d ",i), tam=1;
	}
	if(tam==0) printf("-1");
	return 0;
}
