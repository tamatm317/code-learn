//11.4
#include <stdio.h>

int main(){
	int n,c=0,l=0;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		if(a[i]%2==0) c++;
		else l++;
	printf("%d\n%d",c,l);
}
