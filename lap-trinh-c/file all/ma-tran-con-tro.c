#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int prime(int n){
	for(int i = 2; i<n; ++i){
		if(n%i == 0) return 0;
	}
	return n>1;
}
void input(int **a, int x, int y){
	for(int i = 0; i<x; ++i){
		for(int j = 0; j<y; ++j){
			scanf("%d", &a[i][j]);
			//scanf("%d", (*(a+i)+j));
		}
	}
}
void output(int **a, int x, int y){
	int total = 0;
	for(int i = 0; i<x; ++i){
		for(int j = 0; j<y; ++j){
			// printf("%d", a[i][j]);
			//printf("%d", a[i][j]);
			if(prime(a[i][j])) total +=a[i][j];
		}
	}
	int *sum = &total;
	printf("%d", *sum);
}
int main(){
	int x,y;
	scanf("%d%d", &x, &y);

	int **a = (int **)malloc(x*sizeof(int*));
	for(int i = 0; i<x; ++i){
		a[i] = (int *)malloc(y*sizeof(int));
	}
	input(a,x,y);
	output(a,x,y);
	for(int i = 0; i<x; ++i){
		free(a[i]);
	}
	free(a);
	return 0;
}