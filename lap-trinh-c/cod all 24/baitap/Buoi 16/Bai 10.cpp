#include <stdio.h>

int main(){
	int n,m,ok=0;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	int dem=0;
	for(int i=0;i<n-1;i++){
		if(a[i]==a[i+1]) dem++;	
	}
	printf("%d",dem);
}
