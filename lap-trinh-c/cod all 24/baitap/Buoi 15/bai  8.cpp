//15.8
#include <stdio.h>
#include <math.h>

int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);++i)
		if(n%i==0) return 0;
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j) scanf("%d",&a[i][j]);
	}
	
	int t=0;
	for(int i=0;i<n;++i){
		if(nt(a[i][i])) t+=a[i][i];
		if(nt(a[i][n-i-1])&&i!=n-i-1) t+=a[i][n-i-1];
	}
	printf("%d",t);
}
