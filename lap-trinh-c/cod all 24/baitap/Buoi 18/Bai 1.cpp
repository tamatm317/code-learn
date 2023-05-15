#include <stdio.h>
#include <string.h>

int main(){
	char a[100];
	int b[100000];
	memset(b,0,sizeof(0));
	gets(a);
	int kt=0, so=0, c=0;
	for(int i=0;i<strlen(a);i++){
		if((a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z')&&b[a[i]]==0) c++;
		else if( a[i]>='0'&&a[i]<='9') so++;
		else if(b[a[i]]==0)kt++, b[a[i]]++;
	}
	printf("%d %d %d",so,c,kt);
	return 0;
}
