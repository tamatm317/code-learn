#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	int max=a[0],min=a[0], vma=0, vmi=0;
	for(int i=0;i<n;++i){
		if(a[i]>=max){
			max=a[i];
			vma=i;
		}else if(a[i]<=min){
			min=a[i];
			vmi=i;
		}
	}
	printf("%d %d\n%d %d",max,vma+1,min,vmi+1);
}
