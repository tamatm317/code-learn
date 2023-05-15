#include<stdio.h>

int nhapmang(int a[][50],int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			scanf("%d",&a[i][j]);
		}
	}
}


int tongcot(int a[][50],int n,int x) {
	int s,i;
	s=0;
	for( i=0; i<n; i++) {
		s=s+a[i][x];
	}
	return s;
}

int main() {
	int n,i,j,d;
	scanf("%d",&n);
	int a[50][50];
	nhapmang(a,n);
	int max=-1e9;
	for(i=0; i<n; i++) {
		if(tongcot(a,n,i)>max) {
			max=tongcot(a,n,i);
			d=i;
		}
	}
	printf("%d\n",d+1);
	for(i=0; i<n; i++) {
		printf("%d ",a[i][d]);
	}

}
