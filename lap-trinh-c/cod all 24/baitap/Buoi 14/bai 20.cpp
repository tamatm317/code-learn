#include <stdio.h>

int main (){
	int a[100];
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i){
		scanf("%d",&a[i]);
	}
	int max1 = a[0], max2 = a[1];
	for (int i = 1; i < n; ++i){
		if (a[i] > max1){
			max2 = max1;
			max1 = a[i];
		}
		else if (a[i] > max2&&a[i]!=max1) max2 = a[i];
	}
	printf("%d %d",max1, max2);
	return 0;
}
