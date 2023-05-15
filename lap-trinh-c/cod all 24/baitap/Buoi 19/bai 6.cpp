#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[1001];
	gets(a);
	int hoa=0, thuong=0;
	for(int i=0;i<strlen(a);i++){
		if(islower(a[i])) thuong++;
		else hoa++;
	}
	if(hoa>thuong)
		for(int i=0;i<strlen(a);i++)
			a[i]=toupper(a[i]);	
	else
		for(int i=0;i<strlen(a);i++)
			a[i]=tolower(a[i]);	
	printf("%s",a);
	return 0;
}
