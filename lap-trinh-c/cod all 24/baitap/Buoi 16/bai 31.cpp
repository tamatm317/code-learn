#include <stdio.h>

void sx(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}	
}
int main(){
	int t; 
	scanf("%d", &t);
	while(t--){
		int n; 
		scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		sx(a,n);
		int min=1e9,cnt=0;
		for(int i=0;i<n-1;i++){
			if(a[i+1]-a[i]<min){
				min=a[i+1]-a[i];
				cnt=1;
			}
			else if(a[i+1]-a[i]==min){
				cnt++;
			}
		}
		printf("%d %d\n", min, cnt);
	}
	return 0;
}
