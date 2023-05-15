//3.19
#include <stdio.h>

int main(){
	int n,m; scanf("%d%d",&n,&m);
	int a=1;
	int tam=-1;
	for(int i=1;i<n;i++){
		a*=10;
	}
	for(int i=a;i<a*10;i++){
		if(i%m==0){
			tam=i;
			break;
		}
	}
	printf("%d",tam);
	return 0;
}
