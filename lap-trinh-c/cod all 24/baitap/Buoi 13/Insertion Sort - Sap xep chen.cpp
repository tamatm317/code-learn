#include <stdio.h>

void xuat(int n, int a[]){
	for(int i=0;i<n;++i){
		printf("%d ",a[i]);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);

//Insertion Sort - Sap xep chen
	for(int i=1;i<n;++i){
		int j=i-1;
		int tam=a[i];
		while(tam<a[j]&&j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=tam;
	}

	xuat(n,a);
}

//Interchange sort 
//sap xep doi cho truc tiep
for(int i=0;i<n-1;++i){
	for(int j=i+1;j<n;++j){
		if(a[i]>a[j]){
			int x=a[i];
			a[i]=a[j];
			a[j]=x;
		}
	}
}


//selection sort
//sap xep chon
for(int i=0;i<n-1;++i){
	int min =a[i+1], vt=i+1;
	for(int j=i+1;j<n;++j){
		if(a[j]<min){
			min=a[j];
			vt=j;
		}
	}
	if(a[i]>min){
		int x=a[i];
		a[i]=a[vt];
		a[vt]=x;
	}
}
