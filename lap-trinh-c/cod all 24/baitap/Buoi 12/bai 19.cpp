//12.19
#include <stdio.h>

int main (){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	int d=1, max=a[0];
	for(int i=1;i<n;++i){
		if(a[i]>=max) {
			max=a[i];
			d++;
		}
	}
	printf("%d",d);
	return 0;
}
