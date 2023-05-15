#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[1000];
	memset(b,0,sizeof(b));
	for(int i=0;i<n;++i) scanf("%d",&a[i]),b[a[i]]++;
	int max=b[a[0]],ma=a[0];
	for(int i=0;i<n;i++){
		if(b[a[i]]>max) {
			max=b[a[i]];
			ma=a[i];
		}
	}
	printf("%d",ma);
}
