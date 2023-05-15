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
	int n, d=0;
	scanf("%d",&n);
	int *t=(int *)malloc(n*sizeof(int));
	for(int i=0; i<n; ++i) scanf("%d",t+i);
	for(int i=0; i<n; ++i)
		if(nto(*(t+i)))
			d+=*(t+i);
	printf("%d",d);
	free(t);
	return 0;
}
