//12.8
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	int x;
	scanf("%d",&x);
	for(int i = 0;i < n;i++){
		if(x == a[i]){
			if(i <= n/2)printf("%d",a[n-1]);
			else printf("%d",a[0]);
			return 0;
		}
	}
}
