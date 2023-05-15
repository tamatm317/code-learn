#include <stdio.h>
#include <stdlib.h>

int nto(int x) {
	if(x<2) return 0;
	else {
		for(int i=2; i*i<=x; ++i)
			if(x%i==0) return 0;
		return 1;
	}
}

int main() {
	int n,m, d=0;
	scanf("%d%d",&n,&m);
	int **t=(int **)malloc(n*sizeof(int));
	for(int i=0;i<n;++i){
		*(t+i)=(int *)malloc(m*sizeof(int));
	}
	for(int i=0; i<n; ++i) {
		for(int j=0;j<m;++j){
			scanf("%d",*(t+i)+j);
		}
	}
	for(int i=0; i<n; ++i) {
		for(int j=0;j<m;++j){
			if(nto(*(*(t+i)+j)))
				d+=*(*(t+i)+j);
		}
	}
//	for(int i=0;i<n;++i){
//		free(t[i]);
//	}		
//	free(t);
	printf("%d",d);
	return 0;
}
