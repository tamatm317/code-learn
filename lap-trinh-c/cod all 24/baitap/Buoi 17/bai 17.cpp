//17.17
#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d",&n);
	char a[n];
	int d1=0,d2=0;
	scanf("%s",a);
	for(int j=0;j<strlen(a);++j)
		if(a[j]=='0') d1++; 
		else d2++;
	if(d1>=d2) printf("%d",strlen(a)-d2*2);
	else printf("%d",strlen(a)-d1*2);
	return 0;
}
