#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, d=0;
	scanf("%d",&n);
	int *t=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;++i) {
		scanf("%d",t+i);
		d += *(t+i);
	}
	printf("%d",d);
	free(t);
	return 0;
}

//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int n, d=0;
//	scanf("%d",&n);
//	int a[n];
//	int *t=a;
//	for(int i=0;i<n;++i) {
//		scanf("%d",t+i);
//		d += *(t+i);
//	}
//	printf("%d",d);
//	return 0;
//}

