#include<stdio.h>

int check(int n){
	if(n<10) return 0;
	int t=0;
	int x=n;
	while(n>0){
		t=t*10+n%10;
		n/=10;
	}
	if(t==x) return 1;
	return 0;
}

int main(){
	int n,d=0;
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
		if(check(a[i])) d++;
	}
	printf("%d ",d);
	for(int i = 0;i < n;i++){
		if(check(a[i])) printf("%d ",a[i]);
	}
}
