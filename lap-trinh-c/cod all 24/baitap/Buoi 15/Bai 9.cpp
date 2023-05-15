#include <stdio.h>
#include <string.h>

int main(){
	int n,d=0;
	scanf("%d",&n);
	int a[n],b[1000],c[n];
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	for(int i=0;i<n;++i) scanf("%d",&a[i]),b[a[i]]++;
	for(int i=0;i<n;i++){
		if(b[a[i]]>=2) c[i]=a[i],b[a[i]]=1,d++;
	}
	printf("%d\n",d);
	for(int i=0;i<n;i++){
		if(c[i]!=0) printf("%d ",a[i]);
	}
}
