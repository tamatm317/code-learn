#include <stdio.h>

int nto(int n){
	if(n<2)	return 0;
	else{
		for(int i=2;i<n;i++){
			if(n%i==0) return 0;
		}
		return 1;
	}
}

int tong(int x){
	int t=0;
	while(x>0){
		t+=x%10;
		x/=10;
	}
	if(t%5==0) return 1;
	else return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	int dem=0;
	for(int i=1;i<n;i++){
		if(tong(i)==1&&nto(i)==1){
			dem++;
		}
	}
	printf("%d",dem);
}
