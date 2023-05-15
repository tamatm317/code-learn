#include <stdio.h>

int main (){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(a[j]<a[i]){
				int c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
		printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
	return 0;
}
