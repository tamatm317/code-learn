#include <stdio.h>

int a[1000000], n;

void nhap(){
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);	
}

int main(){
	scanf("%d",&n);
	nhap();
	printf("%d ",a[0]);
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>=max){
			printf("%d ",a[i]);
			max=a[i];
		}
	}
	return 0;
}
