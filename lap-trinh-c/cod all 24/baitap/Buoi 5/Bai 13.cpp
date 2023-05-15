#include <stdio.h>

int tn(int x){
	int temp=x;
	int a=0;
	
	while(x>0){
		if(x%10==9) return 0;
		a=a*10+x%10;
		x/=10;
	}
	if(a==temp){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int dem=0;
	for(int i=2;i<n;i++){
		if(tn(i)==1){
			dem++;
		}
	}
	printf("%d",dem);
}

