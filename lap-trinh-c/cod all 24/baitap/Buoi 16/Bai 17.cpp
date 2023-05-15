//ch nop dc
#include <stdio.h>

int tim(int n, int a[]) {
    int max = -1e9, sum = 0;
    for (int i = 0; i < n; i++) {
    	if(a[i]>=sum+a[i]) sum=a[i];
    	else sum=sum+a[i];
        if(max<sum) max=sum;
    }
    return max;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	printf("%d",tim(n,a));
}
