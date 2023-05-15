//18.12 
#include<stdio.h>
#include<string.h>

int main(){
	char a[101];
	gets(a);
	int n=0;
	char *max="", *min="lskdflkasjfkjssdfak";
	char *t = strtok(a," ");
	while(t != NULL){
		if(strlen(t)>strlen(max)){
			max=t;
		}else if(strlen(t)<strlen(min)){
			min=t;
		}
		t = strtok(NULL," ");
	}
	printf("%s %s",max,min);	
}

