#include <stdio.h>

int dao(int n){
	int tam=n,dao=0;
	while(n!=0){
		dao=dao*10+n%10;
		n/=10;
	}
	if(tam==dao) return 1;
	else return 0;
}

int main(){
	int n,d=0;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		if(dao(a[i])) d++;
	}
	printf("%d\n",d);
	for(int i=0;i<n;i++) if(dao(a[i])) printf("%d ",a[i]);
}
