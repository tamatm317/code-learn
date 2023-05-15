#include <stdio.h>

int main() {
    int n;
    long long t=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		t*=i;
	}
	printf("%lld",t);
    return 0;
}
