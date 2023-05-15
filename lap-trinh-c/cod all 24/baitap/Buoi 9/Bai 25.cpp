//9.25 c1
#include <stdio.h>
#include <math.h>

int main(){
	int n,m,d=0,tam=0;
	scanf("%d%d",&n,&m);
	for(int i=2;i*i<=n;++i){
		while(n%i==0){
			d++;
			if(d==m) {
				printf("%d",i);
				tam=1;
				break;
			}
			n/=i;
		}
		if(tam==1) break;
	}
	if(d==m-1) printf("%d",n);
	else if(d<m) printf("-1");
}

//9.25 c2
#include <stdio.h>
#include <math.h>

int main(){
	int n,m,d=0,tam=0;
	scanf("%d%d",&n,&m);
	for(int i=2;i<=n;++i){
		while(n%i==0){
			d++;
			if(d==m) {
				tam=i;
			}
			n/=i;
		}
	}
	if(tam!=0) printf("%d",tam);
	else printf("-1");
}
