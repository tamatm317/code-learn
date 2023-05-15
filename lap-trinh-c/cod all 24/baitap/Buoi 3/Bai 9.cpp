#include <stdio.h>

int main() {
    int n;
    int t=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		t+=i*i*i;
	}
	printf("%d",t);
    return 0;
}
