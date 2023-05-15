#include <stdio.h>
#include <string.h>
char a[100];

void pl(){
	for(int i=0;i<strlen(a);i++){
		if(a[i]==' ') printf("\n");
		else printf("%c",a[i]);
	}
}

int main(){
	gets(a);
	pl();
	return 0;
}


//c2
#include <stdio.h>
#include <string.h>

int main(){
	char b[1000], a[100][100];
	gets(b);
	int n=0;
	char *t=strtok(b," ");
	while(t!=NULL){
		printf("%s\n",t);
		t=strtok(NULL," ");
	}
}
