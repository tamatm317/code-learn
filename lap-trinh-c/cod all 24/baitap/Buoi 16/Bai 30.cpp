#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int k=0;k<t;++k){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;++i) scanf("%d",&a[i]);
		for(int i=0;i<n-2;++i){
			for(int j=i+1;j<n-1;++j){
				for(int h=j+1;h<n;++h){
					if(a[i]*a[i]+a[j]*a[j]==a[h]*a[h]
					||a[i]*a[i]==a[j]*a[j]+a[h]*a[h]
					||a[i]*a[i]+a[h]*a[h]==a[j]*a[j]){
						goto Toi;
					}
				}
			}
		}
		printf("NO\n");
		continue;
		Toi:
			printf("YES\n");
	}
}
