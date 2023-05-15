#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,m, d=0;
	scanf("%d%d",&n,&m);
	int **t=(int **)malloc(n*sizeof(int));
	for(int i=0; i<n; ++i) {
		*(t+i)=(int *)malloc(m*sizeof(int));
	}
	for(int i=0; i<n; ++i) {
		for(int j=0; j<m; ++j) {
			scanf("%d",*(t+i)+j);
		}
	}
	for(int i=0; i<n; ++i) {
		for(int j=0; j<m; ++j)
			printf("%d ",*(*(t+i)+j));
		printf("\n");
	}
	for(int i=0; i<n; ++i) {
		free(t[i]);
	}
	free(t);
	return 0;
}

