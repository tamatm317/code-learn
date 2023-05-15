//16.9
#include <stdio.h>

int main() {
	int n,k=0,sl1=0,sl2=1;
	scanf("%d",&n);
	int a[n+3],b[n];
	for(int i=1; i<=n; ++i) scanf("%d",&a[i]);
	a[0]=1e9;
	for(int i=1; i<=n; ++i) {
		if(a[i]>a[i-1]) sl2++;
		else sl2=1;
		if(sl2>sl1) {
			sl1=sl2;
			b[0]=i-sl1+1;
			k=1;
		} else if(sl2==sl1) {
			b[k]=i-sl1+1;
			k++;
		}
	}
	printf("%d\n",sl1);
	for(int i=0; i<k; ++i) {
		for(int j=0; j<sl1; ++j) {
			printf("%d ",a[b[i]+j]);
		}
		printf("\n");
	}
}
