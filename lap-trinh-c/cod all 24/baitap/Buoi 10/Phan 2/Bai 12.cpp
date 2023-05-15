#include <stdio.h>

int main(){
	int n, dem=0;
	scanf("%d",&n);
	int a[n];
	int b[100000]={0};
	for(int i=0;i<n;++i) {
		scanf("%d",&a[i]);
		++b[a[i]];
	}
	for(int i=0;i<n;++i){
		if(b[a[i]]) {
			++dem;
			b[a[i]]=0;
		}
	}	
	printf("%d",dem);
}
