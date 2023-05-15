//16.14
#include <stdio.h>
#include <string.h>

int cnt[10001];
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	memset(cnt,0,sizeof(cnt));
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		cnt[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(cnt[a[i]]>=1){
			printf("%d %d\n", a[i], cnt[a[i]]);
		}
		cnt[a[i]]=0;
	}
	return 0;
}
