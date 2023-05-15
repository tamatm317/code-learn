//13.2
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
		if(nt(a[i][i])) t++;
		if(nt(a[i][n-i-1])) t++;
	}
	if(n%2&&nt(a[n/2][n/2])) --t;
	printf("\n%d",t);
}

