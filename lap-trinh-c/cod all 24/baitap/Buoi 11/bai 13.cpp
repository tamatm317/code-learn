#include <stdio.h>
#include <math.h>

int main(){
	int n,dem,tinh=0;
	scanf("%d",&n);
	int a[n*3+1];
	for(int i=0;i<n*3;++i){
		scanf("%d",&a[i]);
	} 
	for(int i=0;i<n*3;i+=3){
		dem=0;
		for(int j=i;j<i+3;++j)
			if(a[j]==1) dem++;
		if(dem>=2) tinh++;
	}
	printf("%d",tinh);
}
