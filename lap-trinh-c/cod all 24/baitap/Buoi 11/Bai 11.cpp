#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int min,max;
	for(int i=0;i<n;++i){
		if(i==n-1) min=abs(a[i-1]-a[i]);
		else min=abs(a[i+1]-a[i]);
		max=min;
		for(int j=0;j<n;++j){
			if(i==j) continue;
			int tam=abs(a[j]-a[i]);
			if(tam>max) max=tam;
			else if(tam<min) min=tam;
		}
		printf("%d %d\n",min,max);
	}
}
