//17.16 cach 1
#include <stdio.h>
#include <string.h>

int main(){
	char a[1000];
	scanf("%s",a);
	for(int j=0;j<strlen(a);++j)
		if(a[j]>='A'&&a[j]<='Z') a[j]+=32;
	
	for(int j=0;j<strlen(a);++j)
		if(a[j]!='a'&&a[j]!='o'
		&&a[j]!='y'&&a[j]!='e'
		&&a[j]!='u'&&a[j]!='i') 
			printf(".%c",a[j]);
	return 0;
}



//17.16 c2
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char a[1000];
	scanf("%s",a);
	for(int j=0;j<strlen(a);++j)
		a[j]=tolower(a[j]);
	
	char b[7]="aoyeui";
	for(int j=0;j<strlen(a);++j)
		int tam=0;
		for(int j=0;j<strlen(b);++j){
			if(a[i]==a[j]){
				tam=1;
				break;
			}
		}
		if(tam==0)
			printf(".%c",a[j]);
	return 0;
}
