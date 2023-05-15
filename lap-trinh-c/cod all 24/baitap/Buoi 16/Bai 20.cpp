#include <stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	int b[m];
	for(int i=0;i<m;++i) scanf("%d",&b[i]);
	int x=0,y=0;
	for(int i=0;i<n+m;++i){
		if(x==n) printf("%d ",b[y]), y++;
		else if(y==m) printf("%d ",a[x]), x++;
		else if(a[x]<b[y]) printf("%d ",a[x]), x++;
		else printf("%d ",b[y]), y++;
	}
}



//c2 luu het vao 1 mang roi dung sap xep
