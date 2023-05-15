#include <stdio.h>
#include <string.h>

int main() {
	char a[1001], b[6]= {"hello"};
	gets(a);
	int t=0;
	for(int i=0; i<strlen(a); ++i) {
		if(a[i]==b[t]) t++;
		if(t==5) {
			printf("YES");
			return 0;
		}
	}
	printf("NO");
}
