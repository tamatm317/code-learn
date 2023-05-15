#include <stdio.h>

int main (){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n;++i){
		if(a[i]==1){
			printf("HARD");
			return 0;
		}
	}
	printf("EASY");
	return 0;
}
