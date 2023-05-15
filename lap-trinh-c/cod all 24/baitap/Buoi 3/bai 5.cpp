#include <stdio.h>

int main() {
    int n;
    float t=0;
	scanf("%d",&n);
	for(float i=1;i<=n;i++) {
		t+=1/(2*i);
	}
	printf("%.2f",t);
    return 0;
}
