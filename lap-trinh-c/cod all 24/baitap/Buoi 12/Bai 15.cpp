#include <stdio.h>

int main (){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n-1;++i){
		if(a[i+1]<=a[i]){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
