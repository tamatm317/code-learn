//9.21
#include<stdio.h>
#include<stdbool.h>

bool sothuannghich(int n){
	int k,dao=0;
	int m = n;
	while(n > 0 ){
		k=n%10;
		if(k==9){
			return false ;
		}
		dao=dao*10+k;
		n/=10;
	}
	if(m==dao){
		return true;
	}
	return false;
}

int main(){
	int n ;
	scanf("%d",&n);
		int i ;
		int d=0;
		for(i =2 ; i<= n ;i ++){
			if (sothuannghich(i)==1){
				printf("%d ",i) ;
				d++;
			}
		}
		printf("\n%d",d);
	return 0;
}
