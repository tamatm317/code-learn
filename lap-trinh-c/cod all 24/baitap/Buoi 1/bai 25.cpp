#include <stdio.h>

int main(){
	char a;
	scanf("%c",&a);
	if(a=='z'||a=='Z') printf("a");
	else{
		a += (a>='A'&&a<='Z')?33:1;
		if(a>'a'&&a<='z') printf("%c",a);
		else printf("INVALID");
	}
	return 0;
}

