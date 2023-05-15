//14.13
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
		for(int j=0;j<n;++j) 
			scanf("%d",&a[i][j]);
	} 
	int d=0,vt=0;
	for(int i=0;i<n;++i){
		int tam=0;
		for(int j=0;j<n;++j){
			if(nt(a[i][j])) tam++;
		}
		if(tam>d){
			d=tam;
			vt=i;
		}
	}
	printf("%d\n",vt+1);
	for(int i=0;i<n;++i){
		if(nt(a[vt][i])) printf("%d ",a[vt][i]);
	}
}



//vt = 0
//0 -> n
//
//a[][];
//
//00 01 02 03
//8 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16

