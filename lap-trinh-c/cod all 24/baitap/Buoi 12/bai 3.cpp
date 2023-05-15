#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	int min1=a[0], min2=a[1], min3=a[2];
	for(int i=0;i<n;++i){
		if(a[i]<min1){
			min3=min2;
			min2=min1;
			min1=a[i];
		}else if(a[i]<min2&&i!=0){
			min3=min2;
			min2=a[i];
		}else if(a[i]<min3&&i>1){
			min3=a[i];
		}
	}
	printf("%d %d %d",min3, min2,min1);
}
