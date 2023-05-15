#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[1000], word[100];
	gets(c);
	scanf("%s", word);
	char *t = strtok(c, " ");
	while(t != NULL){
		if(strcmp(t, word)){   
			printf("%s ",t);
		}
		t = strtok(NULL, " ");
	}
	return 0;
}
