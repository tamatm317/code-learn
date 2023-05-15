//17.15
#include <stdio.h>
#include <string.h>

int main(){
	char a[10];
	int A=0,B=0;
	int t=0;
	scanf("%d",&t);
	while(t--){
		scanf("%s",&a);
		for(int j=0;j<strlen(a);++j)
			if(a[j]=='A') A++; 
			else B++;
	}
	if(A>B) printf("A");
	else printf("B");
	return 0;
}
