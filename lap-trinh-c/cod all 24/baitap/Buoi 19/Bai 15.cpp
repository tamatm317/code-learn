#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int n;
	scanf("%d", &n);
	char c[65005];
	scanf("%s", c);
	int res=0;
	for(int i=0;i<strlen(c);i++){
		if((c[i])%2==0){
			res+=i+1;
		}
	}
	printf("%d", res);
	return 0;
}

//s[1... 2]
//s[2... 2]
//
//s[1... 4]
//s[2... 4]
//s[3... 4]
//s[4... 4]
