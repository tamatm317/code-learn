//17.19
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[100],c[100];
	int ok=0;
	scanf("%s", a);
	scanf("%s", c);
	for(int i=0;i<strlen(a);i++){
		a[i]=tolower(a[i]);
		c[i]=tolower(c[i]);
		if (a[i]>c[i]){
			ok=1;
			break;
		}
		else if(a[i]<c[i]){
			ok=-1;
			break;
		}
	}
	printf("%d", ok);
	return 0;
}
