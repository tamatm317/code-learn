#include<stdio.h>
#include<string.h>

int check(char c[]){
	for(int i=0;i<strlen(c);i++){
		if(c[i] <= 'z'&&c[i] >= 'a') 
			return 0;
	}
	return 1;	
}
int main(){
	char a[101];
	gets(a);
	char *t = strtok(a," ");
	while(t != NULL){
		if(check(t)) 
			printf("%s ", t);
		t = strtok(NULL," ");
	}
}
