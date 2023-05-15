//4.2   c1
#include <stdio.h>

int tong(int x){
	int t=0;
	for(int i=1;i<x;i++){
		if(x%i==0) t+=i;
	}
	if(t==x) return 1;
	else return 0;
}

int main(){
	int a,b,dem=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(tong(i)==1){
			dem++;
			printf("%d ",i);
		} 
	}
	if(dem==0) printf("0");
	return 0;
}





//4.2    c2
#include <stdio.h>
#include <math.h>

int tong(int x){
	int n=0;
	int a=sqrt(x);
	for(int i=2;i<=a;i++){
		if(!(x%i)) n = n+i+x/i;
	}
	if(a*a==x) n-=a;
	
	if(n+1==x&&n) return 1;
	else return 0;
}

int main(){
	int a,b,dem=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;++i){
		if(tong(i)){
			++dem;
			printf("%d ",i);
		} 
	}
	if(!dem) printf("0");
	return 0;
}
