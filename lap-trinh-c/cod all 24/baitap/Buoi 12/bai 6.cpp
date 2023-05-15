//12.6
#include <stdio.h>

int main (){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=n-1;i>=0;--i){
		if(a[i]%2==0) {
			printf("%d",i+1);
			return 0;
		}
	}
	printf("-1");
	return 0;
}
