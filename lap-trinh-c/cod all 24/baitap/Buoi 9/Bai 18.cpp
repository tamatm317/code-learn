#include <stdio.h>

int tn(int n){
	int tam=n;
	int tong=0;
	while(n!=0){
		tong=tong*10+n%10;
		n/=10;
	}
	if(tam==tong) return 1;
	return 0;
}

int ktra(int n){
	while(n!=0){
		if(n%10==6) return 1;
		n/=10;
	}
	return 0;
}

int tong(int n){
	int tong=0;
	while(n!=0){
		tong+=n%10;
		n/=10;
	}
	if (tong%10==8) return 1;
	return 0;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(tn(i)==1&&tong(i)==1&&ktra(i)==1) printf("%d ",i);
	}
	return 0;
}
