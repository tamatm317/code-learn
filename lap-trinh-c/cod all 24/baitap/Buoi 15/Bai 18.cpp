#include <stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j) scanf("%d",&a[i][j]);
	int x,y,t;
	scanf("%d%d",&x,&y);
	
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(j==x-1) printf("%d ",a[i][y-1]);
			else if(j==y-1) printf("%d ",a[i][x-1]);
			else printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
}
