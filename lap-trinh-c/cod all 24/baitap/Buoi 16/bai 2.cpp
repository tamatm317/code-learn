#include <stdio.h>
#include <stdbool.h>

int a[1000000], n;

void nhap(){
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}

bool ktra(){
	for(int i=0;i<n-1;i++)
		if(a[i+1]<=a[i])
			return false;
	return true;
}

int main(){
	scanf("%d",&n);
	nhap();
	if(ktra()) printf("YES");
	else printf("NO");
	return 0;
}
