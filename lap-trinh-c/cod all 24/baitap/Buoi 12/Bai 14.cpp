#include <stdio.h>
#include <math.h>

int main (){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if(abs(a[i]-a[j])==1){
				printf("YES");
				return 0;
			}
		}
	}
	printf("NO");
	return 0;
}
