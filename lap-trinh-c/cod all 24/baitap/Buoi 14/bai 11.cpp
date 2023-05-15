#include<stdio.h>
#include <string.h>

int main(){
	int n,d=0;
	scanf("%d",&n);
	int a[n];
	int b[1000];
	memset(b,0,sizeof(b));
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;i++){
		if(b[a[i]]==0) {
			printf("%d ",a[i]);
			b[a[i]]++;
		}
	}
}
