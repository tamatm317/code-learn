#include <stdio.h>
#include <string.h>

int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	int b[n];
	memset(b,0,sizeof(b));
	for(int i=0;i<k;++i) b[0]+=a[i];
	int max=b[0], vt=0;
	for(int i=0;i<n-k;++i){
		b[i+1]=b[i]-a[i]+a[i+k];
		if(b[i+1]>=max) max=b[i+1], vt=i+1;
	}
	printf("%d\n",max);
	for(int i=vt;i<vt+k;++i) printf("%d ",a[i]);
}
