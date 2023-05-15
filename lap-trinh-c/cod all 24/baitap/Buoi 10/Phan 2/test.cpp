#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int dem = 0;
	int x = a[0];
	for(int i = 1;i<n;++i){
		if(x<=a[i]){
			x = a[i];
			++dem;
		} 
	}
	
	printf("%d",dem+1);
}





7
3 5 6 8 4 2 9
dem=1;
for(int i=1;i<n;++i){
	for(int j=0;j<i;++j){
	}
}
