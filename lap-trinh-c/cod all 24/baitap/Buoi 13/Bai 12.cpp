//13.12 phan 1
#include <stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j) scanf("%d",&a[i][j]);
	}
	int mh=-1e9,vh,t;
	for(int i=0;i<n;++i){
		t=0;
		for(int j=0;j<m;++j){
			t+=a[i][j];
		}
		if(t>mh){
			mh=t;
			vh=i;
		}
	}
//13.12 phan 2	
	int mc=-1e9,vc;
	for(int i=0;i<n;++i){
		t=0;
		for(int j=0;j<m;++j){
			if(j==vh) continue;
			t+=a[j][i];
		}
		if(t>mc){
			mc=t;
			vc=i;
		}
	}
	
	for(int i=0;i<n;++i){
		if(i==vh) continue;
		for(int j=0;j<m;++j){
			if(j==vc) continue;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
