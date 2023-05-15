//16.21
#include <stdio.h>
#include <string.h>

int main(){
	int n,m,x[10000],y[10000];
	memset(x,0,sizeof(x));
	memset(y,0,sizeof(y));
	scanf("%d%d",&n,&m);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]), x[a[i]]++;
	int b[m];
	for(int i=0;i<m;++i) scanf("%d",&b[i]),y[b[i]]++;
	
	for(int i=0;i<10000;++i){
		if(x[i]||y[i]) printf("%d ",i);
	}
	printf("\n");
	
	for(int i=0;i<10000;++i){
		if(x[i]&&y[i]) printf("%d ",i);
	}
}
