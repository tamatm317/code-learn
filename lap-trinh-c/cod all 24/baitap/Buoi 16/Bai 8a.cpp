//16.8a
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int sl1=0,sl2=0;
	for(int i=0;i<n-1;++i){
		if (a[i]!=a[i+1]) sl2++;
		else {
			if(sl2>sl1) sl1=sl2;
			sl2=0;
		}
	}
	if(a[n-2]!=a[n-1]) sl2++;
	if(sl2>sl1) sl1=sl2;
	printf("%d",sl1);
	return 0;
}
