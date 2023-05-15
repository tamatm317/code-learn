//c1
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	int x;
	scanf("%d",&x);
	int b[x];
	for(int i=0;i<x;++i){
		int c,d,t=0;
		scanf("%d%d",&c,&d);
		for(int j=c-1;j<d;++j){
			t+=a[j];
		}
		b[i]=t;
	}
	for(int i=0;i<x;++i){
		printf("%d\n",b[i]);
	}
}




//c2
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int vn[n+1];
	vn[0]=0;
	for(int i=0;i<n;++i) {
		scanf("%d",&a[i]);
		vn[i+1]=vn[i]+a[i];
	}
	
	int x;
	scanf("%d",&x);
	int b[x];
	for(int i=0;i<x;++i){
		int c,d,t=0;
		scanf("%d%d",&c,&d);
		b[i]=vn[d]-vn[c-1];
	}
	for(int i=0;i<x;++i){
		printf("%d\n",b[i]);
	}
}
