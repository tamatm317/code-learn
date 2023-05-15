//15.5
#include <stdio.h>
int n,a[1000][1000];

void sx(int x){
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(a[j][x]>a[i][x]){
				int c=a[j][x];
				a[j][x]=a[i][x];
				a[i][x]=c;
			}
		}
	}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j) scanf("%d",&a[i][j]);
	for(int i=0;i<n;++i)
		sx(i);
		
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j) printf("%d ",a[i][j]);
		printf("\n");
	}
}
