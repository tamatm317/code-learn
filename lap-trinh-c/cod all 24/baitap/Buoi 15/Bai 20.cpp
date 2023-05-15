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
		if(i==x-1) t=y-1;
		else if(i==y-1) t=x-1;
		else t=i;
		for(int j=0;j<m;++j){
			printf("%d ",a[t][j]);
		}
		printf("\n");
	}	
}
