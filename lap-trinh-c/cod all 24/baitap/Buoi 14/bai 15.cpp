#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n][n],h[n],c[n];
	memset(h,0,sizeof(h));
	memset(c,0,sizeof(c));
	
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j) 
			scanf("%d",&a[i][j]);
	} 
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j) {
			h[i]+=a[i][j];
			c[j]+=a[i][j];	
		}
	} 
	for(int i=0;i<n;++i) printf("%d ",h[i]);
	printf("\n");
	for(int i=0;i<n;++i) printf("%d ",c[i]);
}
