#include <stdio.h>

int main(){
	int n, c=0, l=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) {
		scanf("%d",&a[i]);
		if(a[i]%2==0) c++;
		else l++;
	}
	printf("%d ",l);
	for(int i=0;i<n;++i){
		if(a[i]%2) printf("%d ",a[i]);
	}
	printf("\n%d ",c);
	for(int i=0;i<n;++i){
		if(a[i]%2==0) printf("%d ",a[i]);
	}
}
