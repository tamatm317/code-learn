//15.15
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n],b[n*n+5];
	b[0]=1;
	b[1]=0;
	int d=1;
	for(int i=0;i<=n/2;++i){
		for(int j=i;j<n-i;++j) {
			a[i][j]=b[d++];
			b[d]=b[d-1]+b[d-2];
		}
		for(int j=i+1;j<n-i;++j) {
			a[j][n-i-1]=b[d++];
			b[d]=b[d-1]+b[d-2];
		}
		for(int j=n-i-2;j>=i;--j) {
			a[n-i-1][j]=b[d++];
			b[d]=b[d-1]+b[d-2];
		}
		for(int j=n-i-2;j>i;--j) {
			a[j][i]=b[d++];
			b[d]=b[d-1]+b[d-2];
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j) printf("%d ",a[i][j]);
		printf("\n");
	}
}
