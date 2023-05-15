#include <stdio.h>

int main (){
	int n,c;
	scanf("%d%d",&n,&c);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	int d=1;
	for(int i=1;i<n;++i){
		if(a[i]-a[i-1]<=c) d++;
		else d=1;
	}
	printf("%d",d);
	return 0;
}
