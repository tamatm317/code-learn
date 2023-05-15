#include <stdio.h>

bool giamdan(int a,int b){
	return a<b;
}

bool tangdan(int a,int b){
	return a>b;
}

void sx(int a[], int n, bool (*sapxep)(int,int)){
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(sapxep(a[i],a[j])){
				int c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
}

void xuat(int a[],int n){
	printf("\n");
	for(int i=0;i<n;++i){
		printf("%d ",a[i]);
	}
}

int main(){
	int a[10]={5,22,14,3,28,15,5,16,19};
	xuat(a,9);
	sx(a,9,giamdan);
	xuat(a,9);
	sx(a,9,tangdan);
	xuat(a,9);
}

