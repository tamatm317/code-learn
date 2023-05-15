#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j) scanf("%d",&a[i][j]);
	int t1=0,t2=0;
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			if(j<i) t1+=a[i][j];
			else if(j>i) t2+=a[i][j];
	printf("%d %d",t2,t1);
}
