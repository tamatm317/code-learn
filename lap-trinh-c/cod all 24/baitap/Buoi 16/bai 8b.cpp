#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n+3];
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	int sl1=0,sl2=1;
	for(int i=2;i<=n;++i){
		if (a[i]==a[i-1]) sl2++;
		else {
			if(sl2>sl1) sl1=sl2;
			sl2=1;
		}
	}
	if(sl2>sl1) sl1=sl2;
	printf("%d",sl1);
	return 0;
}
