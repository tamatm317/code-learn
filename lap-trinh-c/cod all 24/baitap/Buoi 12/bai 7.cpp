//12.7
#include <stdio.h>

int main (){
	int n,tam=-1;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	int max=-1;
	for(int i=0;i<n;++i){
		if(a[i]>=0&&(a[i]<max||max<0)) {
			tam=i+1;
			max=a[i];
		}
	}
	printf("%d",tam);
	return 0;
}
