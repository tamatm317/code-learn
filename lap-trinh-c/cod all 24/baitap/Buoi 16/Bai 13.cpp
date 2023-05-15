#include <stdio.h> 

int main(){
	int n;
	scanf("%d",&n);
	int cnt[100001] = {0};
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d",&a[i]),cnt[a[i]]++;
	int max = 0,s;
	for(int i = 0; i < n; i++) {
		if( max < cnt[a[i]] ) {
			max = cnt[a[i]];
			s=a[i];
		}
	}
	printf("%d %d",s,max);
}
