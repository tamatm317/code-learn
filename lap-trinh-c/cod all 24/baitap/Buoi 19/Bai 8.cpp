//19.8 
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==0) printf("i love it ");
		else printf("i hate it ");
	}
	return 0;
}
