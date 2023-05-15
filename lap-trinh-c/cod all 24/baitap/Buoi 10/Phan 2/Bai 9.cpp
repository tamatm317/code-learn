#include <stdio.h>

int main(){
	int n, tong=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n;++i) {
		if(a[i]%2) tong+=a[i];
	}
	printf("%d",tong);
}
