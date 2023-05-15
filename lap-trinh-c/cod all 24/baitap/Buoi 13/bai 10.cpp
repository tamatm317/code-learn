#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	int m1=a[0],m2=a[1];
	for(int i=1;i<n;i++){
		if(a[i]>m1){
			m2=m1;
			m1=a[i];
		}else if(a[i]>m2) m2=a[i];
	}
	printf("%d",m2);
}
