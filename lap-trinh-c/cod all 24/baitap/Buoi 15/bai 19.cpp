//15.19 c1
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j) scanf("%d",&a[i][j]);
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(j==i) printf("%d ",a[i][n-i-1]);
			else if(j==n-i-1) printf("%d ",a[i][i]);
			else printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
}


//15.9 c2
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j) scanf("%d",&a[i][j]);
	for(int i=0;i<n;++i){
		int c=a[i][i];
		a[i][i]=a[i][n-i-1];
		a[i][n-1-i]=c;
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
}
