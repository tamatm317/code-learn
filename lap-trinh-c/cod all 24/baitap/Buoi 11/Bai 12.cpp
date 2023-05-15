#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s=0;
	for(int i=0;i<n;i++){
		if(a[i]==25) s+=25;
		else s=s-(a[i]-25);
		if(s<0){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
}
