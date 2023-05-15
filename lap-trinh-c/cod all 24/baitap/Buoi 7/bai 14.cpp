//7.14
#include <stdio.h>

int main(){
	int n; scanf("%d",&n);
	int tam=1;
	int dem=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			tam=tam+dem;
			printf("%d ",tam);
			dem++;
		}
		printf("\n");
	}
	return 0;
}
