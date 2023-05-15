#include <stdio.h>

void xuat(int n, int a[]){
	for(int i=0;i<n;++i){
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n-1;++i){
		int min=a[i], vt=i;
		for(int j=i+1;j<n;++j){
			if(a[j]<min) {
				min=a[j];
				vt=j;
			} 
		}
		if(vt!=i) {
			int c=a[i];
			a[i]=a[vt];
			a[vt]=c;
		}
		xuat(n,a);
	}
	
}
