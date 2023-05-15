//17.18
#include <stdio.h>
#include <string.h>

int main(){
	int n,dem=0;
	scanf("%d",&n);
	char a[4];
	while(n--){
		scanf("%s",a);
		if(a[1]=='+') dem++;
		else dem--;
	}
	printf("%d",dem);
	return 0;
}
