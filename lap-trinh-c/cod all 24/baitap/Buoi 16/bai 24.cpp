//16.24
#include <stdio.h>

void sx(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}	
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	sx(a,n);
	for(int i=0;i<n;i++) 
		if(a[i]%2==0) printf("%d ",a[i]);
	for(int i=n-1;i>=0;i--) 
		if(a[i]%2) printf("%d ",a[i]);
	return 0;
}


