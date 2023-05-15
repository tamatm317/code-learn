//4.7    p1
#include <stdio.h>

int nto(int x){
	if(x<2) return 0;
	for(int j=2;j<x;++j){
		if(x%j==0) return 0;
	}
	return 1;
}

int tn(int x){
	int y=x;
	int a=0;
	while(x){
		a=a*10+x%10;
		x/=10;
	}
	if(y==a) return 1;
	else return 0;
}

//4.7    p2
//ktra c1
//int ktra(int x){
//	int dem=0;
//	for(int i=1;i<=x;i++){
//		if(nto(i)==1&&x%i==0) dem++;
//	}
//	if(dem>=3) return 1;
//	else return 0;
//}

//ktra c2
int ktra(int n){
	int dem=0;
	for(int i=2;i<=n;++i){
		if(!(n%i)){
			++dem;
			while(!(n%i)) n/=i; 
		}
	}
	if(dem>=3) return 1;
	else return 0;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(ktra(i)==1&&tn(i)==1) printf("%d ",i);
	}
	return 0;
}
