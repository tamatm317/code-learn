//14.9
#include<stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	int kc=1e9,x,c,d;
	for(int i = 0;i < n-1;i++){
		for(int j=i+1;j<n;++j){
			x=abs(a[j]-a[i]);
			if(x<kc){
				kc=x;
				c=a[i];
				d=a[j];
			}
		}
	}
	if(d<c) {
		int tmp = d;
		d = c;
		c = tmp;
	}
	printf("%d %d %d",kc,c,d);
}


//1 2 3 4 5 6
