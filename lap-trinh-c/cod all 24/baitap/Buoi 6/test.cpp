#include <stdio.h>
#include <math.h>

void nhap(int a[][100],int n, int m){
	//ham nhap
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			scanf("%d",&a[i][j]);
		}
	}
}

int snt(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(!(n%i)) return 0;
	}
	return n>1;
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[100][100];
	
	nhap(a,n,m);
	
	int s = 0;
	for(int i=0;i<n;++i){
		if(snt(a[i][i])) 
			s += a[i][i];
		if(snt(a[i][n-i-1])&&i!=n-i-1)
			s += a[i][n-i-1];
	}
	printf("%d",s);
}


a b
x = a;
a = b;
b = x;


n = 3		a[i][i]
        i	dcc      dcp a[i][n-i-1]
3 2 1  	0   0 0      0 2
6 5 4	1	1 1		 1 1
9 8 7	2	2 2 	 2 0


a[i][i]
a[i][i]






















