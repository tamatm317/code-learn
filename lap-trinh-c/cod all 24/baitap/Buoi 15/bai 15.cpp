#include <stdio.h>

int sx(int n,int a[]){
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(a[j]<a[i]){
				int c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) {
		scanf("%d",&a[i]);
	}
	sx(n,a);
	for(int i=0;i<n;++i){
		if(a[i]%2==0) printf("%d ",a[i]);
	}
	for(int i=0;i<n;++i){
		if(a[i]%2) printf("%d ",a[i]);
	}
}
