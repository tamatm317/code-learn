//12.20
#include <stdio.h>
#include <string.h>

int main (){
	int n;
	scanf("%d",&n);
	int a[n+1];
	int b[100001];
	memset(b,0,sizeof(b));
	for(int i=0;i<n;++i) scanf("%d",&a[i]),b[a[i]]++;
	for(int i=0;i<n;++i){
		if(b[a[i]]!=0) {
			printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
			b[a[i]]=0;
		}
	}
	return 0;
}
