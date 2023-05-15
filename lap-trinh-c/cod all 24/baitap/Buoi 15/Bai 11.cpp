//15.11
#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[100000],b[10003];
	memset(b,0,sizeof(b));
	for(int i=0;i<n;++i) {
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(b[a[i]]!=0) {
			printf("%d %d\n",a[i],b[a[i]]);
			b[a[i]]=0;
		}
	}
}
