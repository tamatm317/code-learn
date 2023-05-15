//16.27
#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	int a[10]={1,2,5,10,20,50,100,200,500,1000};
	for(int k=1;k<=t;++k){
		int t=0,n;
		scanf("%d",&n);
		for(int i=9;i>=0;--i){
			t+=n/a[i];
			n=n-n/a[i]*a[i];
		}
		printf("%d\n",t);
	}	
}
