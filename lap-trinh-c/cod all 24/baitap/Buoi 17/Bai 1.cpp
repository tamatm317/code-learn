#include <stdio.h>
#include <string.h>
char a[1001];

int tim(){
	int dem=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='a'&&a[i]<='z') dem++;
	}
	return dem;
}

int main(){
	gets(a);
	printf("%d",tim());
	return 0;
}
