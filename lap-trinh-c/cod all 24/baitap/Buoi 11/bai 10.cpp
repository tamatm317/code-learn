//11.10
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	
	int min1=a[0],min2=a[1],vm1=0,vm2=1;
	for(int i=1;i<n;i++) {
		if(a[i]<min1){
			min2=min1;
			vm2=vm1;
			min1=a[i];
			vm1=i;
		}else if(a[i]<min2){
			vm2=i;
			min2=a[i];
		}	
	}
	printf("%d %d\n%d %d",min1,vm1+1,min2,vm2+1);
}
