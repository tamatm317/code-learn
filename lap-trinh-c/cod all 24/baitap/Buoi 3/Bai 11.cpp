#include <stdio.h>

int main() {
    int x,y;
    int t=1;
	scanf("%d%d",&x,&y);
	for(int i=1;i<=y;i++) {
		t*=x;
	}
	printf("%d",t);
    return 0;
}
