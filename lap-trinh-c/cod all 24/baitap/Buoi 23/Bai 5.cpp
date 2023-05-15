#include <stdio.h>

int main(){
	char a[100],dem = 0;
	gets(a);
	char *p=a;
	while(*p!='\0'){
		dem++;
		p++;
	}
	printf("%d",dem);
	return 0;
}

